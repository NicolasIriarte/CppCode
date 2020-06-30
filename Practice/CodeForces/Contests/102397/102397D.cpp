// -*- compile-command: "g++ -Wall 102397D.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 1:03 PM 
 * URL: https://codeforces.com/gym/102397/D
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  ull x, n;
  ull t;
  vector<ull> h;

  cin >> x >> n;

  for (int i = 0; i < x; ++i) {
    cin >> t;
    h.push_back(t);
  }
  int best = 999999999;
  int steps = 0;

  int j;
  for (int i = 0; i < h.size(); ++i) {
    ull tmp = 0;
    for (j = i; j < h.size(); ++j) {
      tmp += h[j];
      if (tmp >= n)
        break;
    }
    steps = j - i + 1;
    if (steps < best && tmp >= n)
      best = steps;
  }

  if (best == 999999999)
    best = -1;
  cout << best;

  return 0;
}
