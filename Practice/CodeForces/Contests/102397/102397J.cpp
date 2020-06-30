// -*- compile-command: "g++ -Wall 102397J.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 7:52 PM
 * URL: https://codeforces.com/gym/102397/J
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  int x, a, n;
  ull tmp;
  ull res = 0;
  cin >> n >> x >> a;

  tmp = a / x;

  res = n / tmp;

  if ((n % tmp) > 0)
    ++res;

  cout << res;

  return 0;
}
