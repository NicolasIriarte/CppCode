#ifndef PROBLEM_HPP
#define PROBLEM_HPP

#include <string>

class Problem
{
public:
  virtual void run() const = 0;

  Problem(
    const std::string &id,
    const std::string &short_descr,
    const std::string &descr) : id_(id),
                                short_descr_(short_descr),
                                descr_(descr){};

  const std::string show() const { return id_ + ": " + short_descr_; }
  const std::string description() const { return descr_; }

  virtual ~Problem(){};

protected:
  const std::string id_;
  const std::string short_descr_;
  const std::string descr_;
};

#endif /* PROBLEM_HPP */
