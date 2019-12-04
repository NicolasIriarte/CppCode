#ifndef CLIENT_H
#define CLIENT_H

// struct sockaddr_in
#include <arpa/inet.h>
#include <string>

class Client {
public:
  explicit Client(const int &sockfd);
  void send(const std::string &msg);
  const std::string recv();
  const std::string ip();
  int port();
  ~Client();

private:
  int m_sockfd;
  struct sockaddr_in m_addr;
  void error(const std::string &msg);
};

#endif /* CLIENT_H */
