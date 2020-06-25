#ifndef P0002_HPP
#define P0002_HPP

#include "Core.hpp"

#include <stack>

class P0002 : public Problem
{
public:
  P0002();
  void run() const override;

private:
  std::stack<double> result_;
  std::string function_;

  void read_string();
};

#define SHORT_DESCR \
  "Simple calculator."

#define DESCRIPTION                                                     \
  "Hello, coders! An important part of programming is being able to\n"  \
  "apply your programs, so your challenge for today is to create a\n"   \
  "calculator application that has use in your life. It might be an\n"  \
  "interest calculator, or it might be something that you can use in\n" \
  "the classroom. For example, if you were in physics class, you\n"     \
  "might want to make a F = M * A calc.\n"                              \
  "\n"                                                                  \
  "EXTRA CREDIT: make the calculator have multiple functions! Not\n"    \
  "only should it be able to calculate F = M * A, but also A = F/M,\n"  \
  "and M = F/A!\n"


#endif /* P0002_HPP */
