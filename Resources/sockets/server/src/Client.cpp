#include "Client.hpp"
#include <iostream>
#include <sys/socket.h>

Client::Client(const int &sockfd) {
  socklen_t len = sizeof(m_addr);
  // This accept() function will write the connecting client's address info
  // into the the address structure and the size of that structure is clilen.
  // The accept() returns a new socket file descriptor for the accepted
  // connection. So, the original socket file descriptor can continue to be used
  // for accepting new connections while the new socker file descriptor is used
  // for communicating with the connected client.
  m_sockfd = accept(sockfd, (struct sockaddr *)&m_addr, &len);
  if (m_sockfd < 0)
    error("ERROR acceptin new users");
  else
    std::cout << "Creating new client\n";
}

void Client::send(const std::string &msg) {
  const int n_zero = 6;
  std::string size = std::to_string(msg.size());

  std::string final_msg(std::string(n_zero - size.length(), '0') + size + msg);

  // This send() function sends the n bytes of the string to the new socket
  ::send(m_sockfd, final_msg.c_str(), final_msg.size(), 0);
}

const std::string Client::recv() {
  char tmp[6];
  char *msg;
  int size;

  if (::recv(m_sockfd, tmp, sizeof(tmp), 0) < 0) {
    error("ERROR reading from socket");
  }

  const std::string buffer(tmp);

  size = std::stoi(tmp);
  msg = new char[size];

  if (::recv(m_sockfd, msg, size, 0) < 0) {
    error("ERROR reading from socket");
  }
  const std::string final_msg(msg);
  delete[](msg);
  return final_msg;
}

void Client::error(const std::string &msg) {
  std::cout << msg << std::endl;
  exit(1);
}

const std::string Client::ip() { return inet_ntoa(m_addr.sin_addr); }

int Client::port() { return ntohs(m_addr.sin_port); }

#include <unistd.h>
Client::~Client() {
  std::cout << "All done!\n\tClosing client connection now.\n";
  close(m_sockfd);
}
