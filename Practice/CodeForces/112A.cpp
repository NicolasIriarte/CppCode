// -*- compile-command: "g++ -Wall 112A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/26/20 4:55 PM
 * URL: https://codeforces.com/problemset/problem/112/A
 * Speed: 34m 11s
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

void lowercase(std::string &s) {
  std::transform(s.begin(), s.end(), s.begin(),
                 [](unsigned char c) { return std::tolower(c); });
}

int main(int argc, char **argv) {
  string s1, s2;
  int tot = 0;
  cin >> s1 >> s2;

  lowercase(s1);
  lowercase(s2);

  for (int i = 0; i < s1.size(); ++i) {
    if (s1.at(i) > s2.at(i)) {
      tot = 1;
      break;
    } else if (s2.at(i) > s1.at(i)) {
      tot = -1;
      break;
    }
  }

  cout << tot;
  return 0;
}

/*
  Name:                   Petya and Strings
  URL:                    https://codeforces.com/problemset/problem/112/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Little Petya loves presents. His mum bought him two strings of the same size
  for his birthday. The strings consist of uppercase and lowercase Latin
  letters. Now Petya wants to compare those two strings lexicographically. The
  letters' case does not matter, that is an uppercase letter is considered
  equivalent to the corresponding lowercase letter. Help Petya perform the
  comparison.

  Input:

  Each of the first two lines contains a bought string. The strings' lengths
  range from 1 to 100 inclusive. It is guaranteed that the strings are of the
  same length and also consist of uppercase and lowercase Latin letters.

  Output:

  If the first string is less than the second one, print "-1". If the second
  string is less than the first one, print "1". If the strings are equal, print
  "0". Note that the letters' case is not taken into consideration when the
  strings are compared.
*/
