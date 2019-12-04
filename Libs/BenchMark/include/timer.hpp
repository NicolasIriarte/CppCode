#ifndef TIMER_H
#define TIMER_H
#include <chrono>
#include <iostream>

#define LINESTR1(file, line) file ":" #line
#define LINESTR(file, line) LINESTR1(file, line)
#define LINE LINESTR(__FILE__, __LINE__)

#define COMBINE(A, B) COMBINE_(A, B)
#define COMBINE_(A, B) A##B

#define SCOPED_TIMER(NAME) Timer COMBINE(timer_, __LINE__)(NAME)
#define SCOPED_FILE_TIMER() Timer COMBINE(timer_, __LINE__)(LINE)
#define SCOPED_FUNCTION_TIMER() Timer COMBINE(timer_, __LINE__)(__FUNCTION__)

#ifndef DEBUG
#define DEBUG 1
#endif

class Timer {
public:
  explicit Timer(const std::string &func_name);
  ~Timer();
  void Stop() const;

private:
  const std::string m_FuncName;
  const std::chrono::time_point<std::chrono::high_resolution_clock>
      m_StartTimePoint;
};

#endif /* TIMER_H */
