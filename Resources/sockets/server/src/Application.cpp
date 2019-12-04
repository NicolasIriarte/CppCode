#include "Application.hpp"
#include "Client.hpp"
#include <iostream>
#include <signal.h>
#include <unistd.h>

Application::Application(const int &port) : srv(port) {
  signal(SIGCHLD, SIG_IGN);
}

void Application::exec() {
  Client *cli;
  while ((cli = srv.acceptNews())) {
    if (!fork()) { // child
      std::cout << "On child PID: " << getpid() << '\n';

      std::cout << "server: got connection from " << cli->ip() << " port "
                << cli->port() << "\n";

      std::string txt = cli->recv();

      std::cout << "Message from client: " << txt << '\n';

      cli->send("Nico mandaaa");

      delete (cli);
      exit(1);
    }
  }
}
