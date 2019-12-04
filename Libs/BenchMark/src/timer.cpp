#include "timer.hpp"

Timer::Timer(const std::string &func_name)
    : m_FuncName(func_name),
      m_StartTimePoint(std::chrono::high_resolution_clock::now()) {}

Timer::~Timer() { Stop(); }

void Timer::Stop() const {
  auto end = std::chrono::high_resolution_clock::now();
  auto elapsed = end - m_StartTimePoint;
  const double ms = std::chrono::duration<double, std::milli>(elapsed).count();

  std::cout << "Name: " << m_FuncName << " - Duration: " << elapsed.count()
            << "us (" << ms << "ms).\n";
}
