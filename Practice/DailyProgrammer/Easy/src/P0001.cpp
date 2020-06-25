#include "P0001.hpp"

P0001::P0001() : Problem("0001", SHORT_DESCR, DESCRIPTION)
{}

void P0001::run() const
{
  std::string name, age, reddit_name;
  std::stringstream ss;
  std::string to_save = "N";

  std::cout << "What is your name?\n";
  std::cin >> name;

  std::cout << "What is your age?\n";
  std::cin >> age;

  std::cout << "What is your reddit name?\n";
  std::cin >> reddit_name;

  std::cout << "\n\n";
  ss << "Your name is " << name << ", you are " << age
     << " years old, and your username is " << reddit_name << '\n';

  std::cout << ss.str();

  std::cout << "\n\nDo you want to save to a file? [y/N]\n";
  std::cin >> to_save;
  if (to_save == "y" || to_save == "Y") {
    save(ss.str());
  }
}


void P0001::save(const std::string &txt) const
{
  std::ofstream file("P0001.txt");
  file << txt;
  std::cout << "Saved on \"P0001.txt\"\n";
}
