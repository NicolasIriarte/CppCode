// -*- compile-command: "g++ -Wall 50A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/26/20 4:37 PM
 * URL: https://codeforces.com/problemset/problem/50/A
 * Speed: 7m 9s
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(int argc, char **argv) {
  int m, n;
  int pieces = 0;

  cin >> m >> n;

  for (int i = 0; i < m; ++i) {
    pieces += n / 2;
  }

  if (n % 2 == 1) {
    pieces += m / 2;
  }

  cout << pieces;

  return 0;
}

/*
  Name:                   Domino piling
  URL:                    https://codeforces.com/problemset/problem/50/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  You are given a rectangular board of M × N squares. Also you are given an
  unlimited number of standard domino pieces of 2 × 1 squares. You are allowed
  to rotate the pieces. You are asked to place as many dominoes as possible on
  the board so as to meet the following conditions:

  1. Each domino completely covers two squares.

  2. No two dominoes overlap.

  3. Each domino lies entirely inside the board. It is allowed to touch the
  edges of the board.

  Find the maximum number of dominoes, which can be placed under these
  restrictions.

  Input:

  In a single line you are given two integers M and N — board sizes in squares
  (1 ≤ M ≤ N ≤ 16).

  Output:

  Output one number — the maximal number of dominoes, which can be placed.

*/
