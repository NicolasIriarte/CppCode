#include <iostream>
#include <cstdlib>
#include <ctime>

// Using high definition clock

int main(int argc, char **argv) {
  timespec time1;
  // Better time generator
  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
  srand(time1.tv_nsec);
  int r = rand() % 10; // 0 to 9
  std::cout << r << std::endl;
  return r;
}
