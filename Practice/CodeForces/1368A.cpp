// -*- compile-command: "g++ -Wall 1368A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/20/20 1:50 PM
 * URL: https://codeforces.com/problemset/problem/1368/A
 * Speed: 18m 28s
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
    llu a, b, n;
    scanf("%llu %llu %llu", &a, &b, &n);
    int counter = 0;
    while (a <= n) {
      ++counter;
      if (b < a)
        swap(a, b);
      a += b;
    }
    cout << counter << '\n';
  }

  return 0;
}

/*
  Name:                   C+=
  URL:                    https://codeforces.com/problemset/problem/1368/A
  Time limit per test:    2 seconds.
  Memory limit per test:  512 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Leo has developed a new programming language C+=. In C+=, integer variables
  can only be changed with a "+=" operation that adds the right-hand side value
  to the left-hand side variable. For example, performing "a += b" when a = 2, b
  = 3 changes the value of a to 5

  (the value of b does not change).

  In a prototype program Leo has two integer variables a and b, initialized with
  some positive values. He can perform any number of operations "a += b" or "b
  += a". Leo wants to test handling large integers, so he wants to make the
  value of either a or b strictly greater than a given value n . What is the
  smallest number of operations he has to perform?

  Input:

  The first line contains a single integer T (1≤T≤100) — the number of test
  cases.

  Each of the following T lines describes a single test case, and contains three
  integers a,b,n (1≤a,b≤n≤10^9) — initial values of a and b, and the value one
  of the variables has to exceed, respectively.

  Output:

  For each test case print a single integer — the smallest number of operations
  needed. Separate answers with line breaks.

*/
