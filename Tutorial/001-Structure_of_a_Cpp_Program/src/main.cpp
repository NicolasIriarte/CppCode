// To compile use:
// g++ main.cpp -o hello

// Then you can run it with:
// ./hello

// This program print "Hello world!" and finish.

// This is an include statement, and let us use the 'cout' function
#include <iostream>

// This is the principal function of every program, here all the program start,
// it only can be one function with this name.
int main() {

  // std::cout have four parts:
  
  // 1. std:: -> This indicate that we are going to use a method of the standard
  // library.
  
  // 2. cout -> This is the method used, is the function to be called.

  // 3. << -> The stream operator allow 'redirect' strings (In this case) from
  // right to left (<<).

  // 4. "Hello world!\n" -> The string that is redirected to the cout method.
  std::cout << "Hello world!\n";

  
  return 0;
}
