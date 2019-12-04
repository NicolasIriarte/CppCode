#include "Conection.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
  Conection c("127.0.0.1", 2019);

  c.send("Holaaaaaa mi servidor");

  std::cout << c.recv();

  return 0;
}
