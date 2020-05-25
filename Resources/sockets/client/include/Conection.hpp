#ifndef CONECTION_H
#define CONECTION_H

#include <string>

// struct sockaddr_in
#include <arpa/inet.h>

class Conection {
public:
  Conection(const std::string &host, const int &port);
  void send(const std::string &msg);
  const std::string recv();
  ~Conection();

private:
  int sockfd;
  int portno;
  struct sockaddr_in serv_addr;
  struct hostent *server;
  void error(const std::string &msg);
};

#endif /* CONECTION_H */
