// -*- compile-command: "g++ -Wall 133A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/08/20 3:21 PM
 * URL: https://codeforces.com/problemset/problem/133/A
 * Speed: 5m 52s
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
  string s;
  cin >> s;
  bool output = false;
  for (auto &c : s) {
    switch (c) {
    case 'H':
      output = true;
      break;
    case 'Q':
      output = true;

      break;
    case '9':
      output = true;

      break;
    }
  }

  cout << (output ? "YES" : "NO") << '\n';

  return 0;
}

/*
  Name:                   HQ9+
  URL:                    https://codeforces.com/problemset/problem/133/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  HQ9+ is a joke programming language which has only four one-character
  instructions:

  1. "H" prints "Hello, World!".
  2. "Q" prints the source code of the program itself.
  3. "9" prints the lyrics of "99 Bottles of Beer" song.
  4. "+" increments the value stored in the internal accumulator.

  Instructions "H" and "Q" are case-sensitive and must be uppercase. The
  characters of the program which are not instructions are ignored.

  You are given a program written in HQ9+. You have to figure out whether
  executing this program will produce any output.

  Input:

  The input will consist of a single line p which will give a program in HQ9+.
  String p will contain between 1 and 100 characters, inclusive. ASCII-code of
  each character of p will be between 33 (exclamation mark) and 126 (tilde),
  inclusive.

  Output:

  Output "YES", if executing the program will produce any output, and "NO"
  otherwise.

*/
