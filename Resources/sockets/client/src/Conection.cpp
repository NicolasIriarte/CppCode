#include "Conection.hpp"
#include <iostream>
#include <netdb.h>
#include <strings.h>

Conection::Conection(const std::string &host, const int &port) : portno(port) {
  sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd < 0)
    error("ERROR opening socket");
  server = gethostbyname(host.c_str());
  if (server == NULL) {
    fprintf(stderr, "ERROR, no such host\n");
    exit(0);
  }

  bzero((char *)&serv_addr, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr,
        server->h_length);
  serv_addr.sin_port = htons(portno);
  if (connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    error("ERROR connecting");
  // printf("Please enter the message: ");
  // bzero(buffer, 256);
}

void Conection::error(const std::string &msg) {
  std::cout << msg << std::endl;
  exit(0);
}

void Conection::send(const std::string &msg) {
  const int n_zero = 6;
  std::string size = std::to_string(msg.size());

  std::string final_msg(std::string(n_zero - size.length(), '0') + size + msg);

  // This send() function sends the n bytes of the string to the new socket
  ::send(sockfd, final_msg.c_str(), final_msg.size(), 0);
}

const std::string Conection::recv() {
  char tmp[6];
  char *msg;
  int size;

  if (::recv(sockfd, tmp, sizeof(tmp), 0) < 0) {
    error("ERROR reading from socket");
  }

  const std::string buffer(tmp);
  size = std::stoi(tmp);
  msg = new char[size];

  if (::recv(sockfd, msg, size, 0) < 0) {
    error("ERROR reading from socket");
  }
  const std::string final_msg(msg);
  delete[](msg);
  return final_msg;
}

#include <unistd.h>
Conection::~Conection() {
  std::cout << "Closing client\n";
  close(sockfd);
}
