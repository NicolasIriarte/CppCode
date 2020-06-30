// -*- compile-command: "g++ -Wall 102397F.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 3:33 PM
 * URL: https://codeforces.com/gym/102397/F
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  ull n = 10e9;
  scanf("%llu", &n);

  int a = 0;
  while (n > 1) {
    --n;
    ++a;
  }

  if (a % 2 == 1) {
    cout << "Mahmoud";
  } else {
    cout << "Bashar";
  }

  return 0;
}
