// -*- compile-command: "g++ -Wall 903A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/01/20 7:15 PM
 * URL: https://codeforces.com/problemset/problem/903/A
 * Speed: > day
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
  int n;
  int value;

  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &value);
    bool valid = false;
    while (!valid && value > 2) {
      if (value % 3 == 0 || value % 7 == 0) {
        valid = true;
      } else {
        value -= 3;
      }
    }
    if (valid)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}

/*
  Name:                   Hungry Student Problem
  URL:                    https://codeforces.com/problemset/problem/903/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Ivan's classes at the university have just finished, and now he wants to go to
  the local CFK cafe and eat some fried chicken.

  CFK sells chicken chunks in small and large portions. A small portion contains
  3 chunks; a large one — 7 chunks. Ivan wants to eat exactly x chunks. Now he
  wonders whether he can buy exactly this amount of chicken.

  Formally, Ivan wants to know if he can choose two non-negative integers a and
  b in such a way that a small portions and b large ones contain exactly x
  chunks.

  Help Ivan to answer this question for several values of x!

  Input:

  The first line contains one integer n (1 ≤ n ≤ 100) — the number of testcases.

  The i-th of the following n lines contains one integer x i (1 ≤ x i ≤ 100) —
  the number of chicken chunks Ivan wants to eat.

  Output:

  Print n lines, in i-th line output YES if Ivan can buy exactly x i chunks.
  Otherwise, print NO.

*/
