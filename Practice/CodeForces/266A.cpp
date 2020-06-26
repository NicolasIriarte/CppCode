// -*- compile-command: "g++ -Wall 266A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/26/20 7:06 PM
 * URL: https://codeforces.com/problemset/problem/266/A
 * Speed: 6m 12s
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  string s;
  char p = 'a';
  int tot = 0;
  cin >> s;
  cin >> s;
  for (auto c : s) {
    if (p == c)
      ++tot;
    p = c;
  }
  cout << tot;
  return 0;
}

/*
  Name:                   Stones on the Table
  URL:                    https://codeforces.com/problemset/problem/266/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  There are n stones on the table in a row, each of them can be red, green or
  blue. Count the minimum number of stones to take from the table so that any
  two neighboring stones had different colors. Stones in a row are considered
  neighboring if there are no other stones between them.

  Input:

  The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the
  table.

  The next line contains string s, which represents the colors of the
  stones. We'll consider the stones in the row numbered from 1 to n from left to
  right. Then the i-th character s equals "R", if the i-th stone is red, "G", if
  it's green and "B", if it's blue.

  Output:

  Print a single integer — the answer to the problem.

*/
