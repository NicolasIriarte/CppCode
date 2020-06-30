// -*- compile-command: "g++ -Wall 102397E_B.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 3:14 PM
 * URL: https://codeforces.com/gym/102397/E
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main() {
  int n;
  int x;
  cin >> n >> x;
  int *array = new int[n];
  for (int i = 0; i < n; i++)
    cin >> array[i];
  int count = -1;
  for (int i{}; i < n; i++) {
    int sum = 0;
    int d = 0;
    for (int j{i}; j < n; j++) {
      d++;
      sum += array[j];
      if (sum >= x) {
        if (d < count || count == -1)
          count = d;
        break;
      }
    }
  }

  cout << count;
}
