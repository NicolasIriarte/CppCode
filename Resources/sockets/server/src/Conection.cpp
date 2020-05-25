#include "Conection.hpp"
#include <iostream>

#include <sys/socket.h>

Conection::Conection(const int port) : m_port(port) {
  std::cout << "Creating conection\n\tOpening socket descriptior\n";
  // create a socket
  // socket(int domain, int type, int protocol)
  m_sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (m_sockfd < 0)
    error("ERROR opening socket");

  std::cout << "\tLoading host_addr structure\n";
  /* setup the host_addr structure for use in bind call */
  // server byte order
  m_addr.sin_family = AF_INET;

  // automatically be filled with current host's IP address
  m_addr.sin_addr.s_addr = INADDR_ANY;

  std::cout << "\tSetting port " << m_port << " to listen\n";
  // convert short integer value for port must be converted into network byte
  // order
  m_addr.sin_port = htons(m_port);

  std::cout << "\tBinding conection\n";

  // bind(int fd, struct sockaddr *local_addr, socklen_t addr_length)
  // bind() passes file descriptor, the address structure,
  // and the length of the address structure
  // This bind() call will bind  the socket to the current IP address on port,
  // portno
  if (bind(m_sockfd, (struct sockaddr *)&m_addr, sizeof(m_addr)) < 0)
    error("ERROR on binding");

  std::cout << "\tSetting listen queue to 5\n";
  // This listen() call tells the socket to listen to the incoming connections.
  // The listen() function places all incoming connection into a backlog queue
  // until accept() call accepts the connection.
  // Here, we set the maximum size for the backlog queue to 5.
  listen(m_sockfd, 5);
}

Client *Conection::acceptNews() {
  std::cout << "Waiting clients...\n";
  Client *c = new Client(m_sockfd);
  return c;
}

void Conection::error(const std::string &msg) {
  std::cout << msg << std::endl;
  exit(1);
}

const std::string Conection::ip() { return inet_ntoa(m_addr.sin_addr); }

int Conection::port() { return ntohs(m_addr.sin_port); }

#include <unistd.h>
Conection::~Conection() {
  std::cout << "Closing server..\n";
  close(m_sockfd);
}
