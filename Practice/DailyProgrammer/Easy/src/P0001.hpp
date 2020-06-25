#ifndef P0001_HPP
#define P0001_HPP

#include "Core.hpp"

#include <fstream>
#include <sstream>

class P0001 : public Problem
{
public:
  P0001();
  void run() const override;

private:
  void save(const std::string &txt) const;
};

#define SHORT_DESCR \
  "Greeting program."

#define DESCRIPTION                                                                       \
  "Create a program that will ask the users name, age, and reddit username.\n"            \
  "Have it tell them the information back, in the format:\n\n"                            \
  "\"Your name is (blank), you are (blank) years old, and your username is (blank)\"\n\n" \
  "for extra credit, have the program log this information in a file to be accessed later."

#endif /* 0001_HPP */
