#include <cstdlib>
#include <iostream>

int main(int argc, char **argv) {
  if (argc <= 2) {
    std::cout << "You need 2 arguments or more\n";
    return 1;
  }

  int total = 0;

  for (int i = 1; i < argc; ++i) {
    total += std::atoi(*(argv + i));
  }

  std::cout << "Sum of values: " << total << '\n';

  return 0;
}
