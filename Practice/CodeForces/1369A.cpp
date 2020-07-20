// -*- compile-command: "g++ -Wall 1369A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/18/20 8:31 PM
 * URL: https://codeforces.com/problemset/problem/1369/A
 * Speed: 5m 11s
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
  scanf("%d", &t);
  for (int i = 0; i < t; ++i) {
    int n;
    scanf("%d", &n);
    if (n % 4 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}

/*
  Name:                   FashionabLee
  URL:                    https://codeforces.com/problemset/problem/1369/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Lee is going to fashionably decorate his house for a party, using some regular
  convex polygons...

  Lee thinks a regular n-sided (convex) polygon is beautiful if and only if he
  can rotate it in such a way that at least one of its edges is parallel to the
  OX-axis and at least one of its edges is parallel to the OY-axis at the same
  time.

  Recall that a regular n-sided polygon is a convex polygon with n vertices such
  that all the edges and angles are equal.

  Now he is shopping: the market has t regular polygons. For each of them print
  YES if it is beautiful and NO otherwise.

  Input:

  The first line contains a single integer t (1≤t≤10^4) — the number of polygons
  in the market.

  Each of the next t lines contains a single integer ni (3≤ni≤10^9): it means
  that the i-th polygon is a regular ni-sided polygon.

  Output:

  For each polygon, print YES if it's beautiful or NO otherwise (case
  insensitive).

*/
