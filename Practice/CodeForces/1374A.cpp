// -*- compile-command: "g++ -Wall 1374A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/18/20 5:01 PM
 * URL: https://codeforces.com/problemset/problem/1374/A
 * Speed: 44m 37s
 */

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int llu;
typedef long long int ll;

const double PI = 3.14159265358979323846264338;
const ll MOD = 1e9 + 7;
#define INF 1000000000000000000ll

template <typename T> void bug(T data) { cout << "Here! " << data << endl; }
void bug() { cout << "Here!" << endl; }

int main(int argc, char **argv) {
  int t;
  llu x, y, n;
  scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    scanf("%llu %llu %llu", &x, &y, &n);
    if (n - n % x + y <= n) {
      cout << n - n % x + y << endl;
    } else {
      cout << n - n % x - (x - y) << endl;
    }
  }

  return 0;
}

/*
  Name:                   Required Remainder
  URL:                    https://codeforces.com/problemset/problem/1374/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  You are given three integers x,y and n. Your task is to find the maximum
  integer k such that 0≤k≤n that kmodx=y, where mod is modulo operation. Many
  programming languages use percent operator % to implement it.

  In other words, with given x,y and n you need to find the maximum possible
  integer from 0 to n that has the remainder y modulo x.

  You have to answer t independent test cases. It is guaranteed that such k
  exists for each test case.

  Input:

  The first line of the input contains one integer t (1≤t≤5⋅10^4) — the number
  of test cases. The next t lines contain test cases.

  The only line of the test case contains three integers x,y and n (2≤x≤10^9;
  0≤y<x; y≤n≤10^9).

  It can be shown that such k always exists under the given constraints.

  Output:

  For each test case, print the answer — maximum non-negative integer k such
  that 0≤k≤n and kmodx=y. It is guaranteed that the answer always exists.

*/
