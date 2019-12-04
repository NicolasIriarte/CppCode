#include "Application.hpp"
#include <iostream>
#include <sys/wait.h>
#include <unistd.h>
void printMenu() {
  std::cout << "1- Stop server.\n"
               "2- Clear screen.\n";
}

int main(int, char **) {
  // Ignore child signal on close
  int pid;
  if ((pid = fork())) { // father
    int opc;
    do {
      printMenu();
      std::cin >> opc;
      switch (opc) {
      case 1:
        kill(pid, SIGINT);
        break;
      case 2:
        system("clear");
        break;
      default:
        std::cout << "Invalid option.\n";
        break;
      }
    } while (opc != 1);
  } else { // child
    Application app(2019);
    app.exec();
  }
  return 0;
}
