#include "P0002.hpp"

P0002::P0002() : Problem("0002", SHORT_DESCR, DESCRIPTION) {}


void P0002::run() const
{
}

void P0002::read_string()
{
  std::cout << "Insert postfix expression:\n";
  std::cin >> function_;
  int parenthesis, numbers, operators;
  parenthesis = numbers = operators = 0;

  char prev = '\0';

  for (auto &c : function_) {
    switch (c) {
    case '+':
    case '-':
    case '*':
    case '/':
      ++operators;
      break;
    case '(':
      ++parenthesis;
      break;
    case ')':
      ++parenthesis;
      break;
    default:
      if (!std::isdigit(prev) && std::isdigit(c)) {
        ++numbers;
      }
      break;
    }
    prev = c;
  }

  std::cout << "Function contains: \n"
            << "Balance parenthesis: " << parenthesis << '\n'
            << "Numbers" << numbers << '\n'
            << "Operators" << operators << '\n';
}
