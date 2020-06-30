// -*- compile-command: "g++ -Wall 102397I.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 7:43 PM
 * URL: https://codeforces.com/gym/102397/I
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  int n;
  static int test[5];
  string s;
  cin >> n;
  cin >> s;

  for (auto &c : s) {
    ++test[c - 'a'];
  }

  int min = 999999999, max = 0;

  for (int i = 0; i < 5; ++i) {
    if (test[i] < min)
      min = test[i];

    if (test[i] > max)
      max = test[i];
  }

  printf("%d %d", min, max);
  
  return 0;
}
