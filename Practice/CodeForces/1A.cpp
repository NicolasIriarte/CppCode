// -*- compile-command: "g++ -Wall 1A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/25/20 6:22 PM
 * URL: https://codeforces.com/problemset/problem/1/A
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(int argc, char **argv) {
  unsigned long long n, m, a;
  cin >> n >> m >> a;

  unsigned long long flagstones_x = 0, flagstones_y = 0;

  flagstones_x += n / a;

  if ((n % a) > 0)
    ++flagstones_x;

  flagstones_y += m / a;

  if ((m % a) > 0)
    ++flagstones_y;

  std::cout << flagstones_x * flagstones_y;

  return 0;
}

/*
  Name:                      Theatre Square
  URL:                       https://codeforces.com/problemset/problem/1/A
  Time limit per test:       1 seconds.
  Memory limit per test:     256 megabytes.
  Input:                     standart input.
  Output:                    standart output.

  Description:

  Theatre Square in the capital city of Berland has a rectangular shape with the
  size n × m meters. On the occasion of the city's anniversary, a decision was
  taken to pave the Square with square granite flagstones. Each flagstone is of
  the size a × a.

  What is the least number of flagstones needed to pave the Square? It's allowed
  to cover the surface larger than the Theatre Square, but the Square has to be
  covered. It's not allowed to break the flagstones. The sides of flagstones
  should be parallel to the sides of the Square.


  Input:

  The input contains three positive integer numbers in the first line: n,  m and
  a (1 ≤  n, m, a ≤ 109).

  Output:

  Write the needed number of flagstones.

*/
