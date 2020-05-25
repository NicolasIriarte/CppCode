#ifndef APPLICATION_H
#define APPLICATION_H

#include "Conection.hpp"

class Application {
public:
  explicit Application(const int &port);
  void exec();

private:
  Conection srv;
};

#endif /* APPLICATION_H */
