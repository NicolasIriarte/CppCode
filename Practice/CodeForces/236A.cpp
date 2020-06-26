// -*- compile-command: "g++ -Wall 236A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/26/20 7:14 PM
 * URL: https://codeforces.com/problemset/problem/236/A
 * Speed: 23m 43s
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  string s;
  cin >> s;
  int n = s.size();
  bool repeated;

  for (int i = 0; i < s.size(); ++i) {
    repeated = false;
    for (int j = i; j < s.size(); ++j) {
      if (s[j] == s[i] && i != j)
        repeated = true;
    }
    if (repeated)
      --n;
  }

  if ((n % 2) == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";

  return 0;
}
