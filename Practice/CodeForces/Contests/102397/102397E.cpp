// -*- compile-command: "g++ -Wall 102397D.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 1:03 PM
 * URL: https://codeforces.com/gym/102397/E
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))
#define FAST                                                                   \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main(int argc, char **argv) {
  FAST;
  int x;
  ull n;
  int t;
  vector<int> h;
  int best = 999999999;
  int j;

  scanf("%d %llu", &x, &n);
  for (int i = 0; i < x; ++i) {
    scanf("%d", &t);
    h.push_back(t);
  }
  for (int i = 0; i < x; ++i) {
    ull tmp = 0;
    for (j = i; j < x; ++j) {
      tmp += h[j];
      if (tmp >= n) {
        break;
      }
    }
    if (tmp < n)
      break;
    else if ((-i + j + 1) < best)
      best = -i + j + 1;
  }

  if (best == 999999999)
    cout << -1;
  else
    cout << best;

  return 0;
}
