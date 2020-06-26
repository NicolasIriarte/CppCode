// -*- compile-command: "g++ -Wall 281A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/26/20 7:01 PM
 * URL: https://codeforces.com/problemset/problem/281/A
 * Speed: 3m 18s
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  string s;
  cin >> s;
  s[0] = std::toupper(s[0]);
  cout << s;
  return 0;
}

/*
  Name:                   Word Capitalization
  URL:                    https://codeforces.com/problemset/problem/281/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Capitalization is writing a word with its first letter as a capital letter.
  Your task is to capitalize the given word.

  Note, that during capitalization all the letters except the first one remains
  unchanged.

  Input:

  A single line contains a non-empty word. This word consists of lowercase and
  uppercase English letters. The length of the word will not exceed 10^3.

  Output:

  Output the given word after capitalization.

*/
