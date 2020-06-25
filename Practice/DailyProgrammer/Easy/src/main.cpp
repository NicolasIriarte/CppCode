#include "Core.hpp"
#include "P0001.hpp"

#include <vector>

int main(int argc, const char **argv)
{
  std::vector<Problem *> problem_list;
  size_t opc;

  problem_list.push_back(new P0001);


  for (auto &i : problem_list) {
    std::cout << i->show() << '\n';
  }

  std::cin >> opc;

  problem_list[opc]->run();

  return 1;
}
