#ifndef CONECTION_H
#define CONECTION_H

#include "Client.hpp"
#include <string>

// struct sockaddr_in
#include <arpa/inet.h>

class Conection {
public:
  explicit Conection(const int port);
  const std::string ip();
  int port();
  Client *acceptNews();
  ~Conection();

private:
  const int m_port;
  struct sockaddr_in m_addr;
  int m_sockfd;
  void error(const std::string &msg);
};

#endif /* CONECTION_H */
