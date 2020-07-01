// -*- compile-command: "g++ -Wall 535A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/01/20 2:03 PM
 * URL:https://codeforces.com/problemset/problem/535/A
 * Speed: 7m 3s
 */

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int llu;
typedef long long int ll;

const double PI = 3.14159265358979323846264338;
const ll MOD = 1e9 + 7;
#define INF 1000000000000000000ll

template <typename T> void bug(T data) { cout << "Here! " << data << endl; }
void bug() { cout << "Here!" << endl; }

int main(int argc, char **argv) {

  const vector<string> nums = {
      "zero",         "one",           "two",           "three",
      "four",         "five",          "six",           "seven",
      "eight",        "nine",          "ten",           "eleven",
      "twelve",       "thirteen",      "fourteen",      "fifteen",
      "sixteen",      "seventeen",     "eighteen",      "nineteen",
      "twenty",       "twenty-one",    "twenty-two",    "twenty-three",
      "twenty-four",  "twenty-five",   "twenty-six",    "twenty-seven",
      "twenty-eight", "twenty-nine",   "thirty",        "thirty-one",
      "thirty-two",   "thirty-three",  "thirty-four",   "thirty-five",
      "thirty-six",   "thirty-seven",  "thirty-eight",  "thirty-nine",
      "forty",        "forty-one",     "forty-two",     "forty-three",
      "forty-four",   "forty-five",    "forty-six",     "forty-seven",
      "forty-eight",  "forty-nine",    "fifty",         "fifty-one",
      "fifty-two",    "fifty-three",   "fifty-four",    "fifty-five",
      "fifty-six",    "fifty-seven",   "fifty-eight",   "fifty-nine",
      "sixty",        "sixty-one",     "sixty-two",     "sixty-three",
      "sixty-four",   "sixty-five",    "sixty-six",     "sixty-seven",
      "sixty-eight",  "sixty-nine",    "seventy",       "seventy-one",
      "seventy-two",  "seventy-three", "seventy-four",  "seventy-five",
      "seventy-six",  "seventy-seven", "seventy-eight", "seventy-nine",
      "eighty",       "eighty-one",    "eighty-two",    "eighty-three",
      "eighty-four",  "eighty-five",   "eighty-six",    "eighty-seven",
      "eighty-eight", "eighty-nine",   "ninety",        "ninety-one",
      "ninety-two",   "ninety-three",  "ninety-four",   "ninety-five",
      "ninety-six",   "ninety-seven",  "ninety-eight",  "ninety-nine",
  };

  int d;

  scanf("%d", &d);
  cout << nums[d];

  return 0;
}

/*
  Name:                   Tavas and Nafas
  URL:                    https://codeforces.com/problemset/problem/535/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Today Tavas got his test result as an integer score and he wants to share it
  with his girlfriend, Nafas.

  His phone operating system is Tavdroid, and its keyboard doesn't have any
  digits! He wants to share his score with Nafas via text, so he has no choice
  but to send this number using words.

  He ate coffee mix without water again, so right now he's really messed up and
  can't think.

  Your task is to help him by telling him what to type.

  Input:

  The first and only line of input contains an integer s (0 ≤ s ≤ 99), Tavas's
  score.

  Output:

  In the first and only line of output, print a single string consisting only
  from English lowercase letters and hyphens ('-'). Do not use spaces.

*/
