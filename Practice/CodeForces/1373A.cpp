// -*- compile-command: "g++ -Wall 1373A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/08/20 5:13 PM
 * URL: https://codeforces.com/problemset/problem/1373/A
 * Speed: Abandoned
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
  llu a, // 1st shop value x donut
    b, // 2nd shop num donut x box
    c; // 2nd shop cost of box

  scanf("%d", &t);
  for (int i = 0; i < t; ++i) {
    scanf("%llu %llu %llu", &a, &b, &c);

    if (a < c)
      cout << "1";
    else
      cout << "-1";
    cout << " ";

    if (c < a * b)
      cout << b;
    else
      cout << "-1";
    cout << '\n';
  }
  return 0;
}

/*
  Name:                   Donut Shops
  URL:                    https://codeforces.com/problemset/problem/1373/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  There are two rival donut shops.

  The first shop sells donuts at retail: each donut costs a dollars.

  The second shop sells donuts only in bulk: box of b donuts costs c dollars. So
  if you want to buy x donuts from this shop, then you have to buy the smallest
  number of boxes such that the total number of donuts in them is greater or
  equal to x.

  You want to determine two positive integer values:

  1. How many donuts can you buy so that they are strictly cheaper in the first
  shop than in the second shop?

  2. How many donuts can you buy so that they are
  strictly cheaper in the second shop than in the first shop?

  If any of these values doesn't exist then that value should be equal to −1. If
  there are multiple possible answers, then print any of them.

  The printed values should be less or equal to 10^9. It can be shown that under
  the given constraints such values always exist if any values exist at all.

  Input:

  The first line contains a single integer t (1≤t≤1000) — the number of
  testcases.

  Each of the next t lines contains three integers a, b and c (1≤a≤10^9,
  2≤b≤10^9, 1≤c≤10^9).

  Output:

  For each testcase print two positive integers. For both shops print such x
  that buying x donuts in this shop is strictly cheaper than buying x donuts in
  the other shop. x should be greater than 0 and less or equal to 10^9.

  If there is no such x, then print −1. If there are multiple answers, then print
  any of them.

*/
