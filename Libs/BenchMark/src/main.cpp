#include "timer.hpp"

int main(const int, const char **) {
  SCOPED_FILE_TIMER();
  SCOPED_FUNCTION_TIMER();
  SCOPED_TIMER("MyName");
  return 0;
}
