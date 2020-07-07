// -*- compile-command: "g++ -Wall 810A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/07/20 8:28 AM
 * URL: https://codeforces.com/problemset/problem/810/A
 * Speed: 9m 54s
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
  int n, k;
  double tmp;
  double tot = 0;
  scanf("%d %d", &n, &k);

  int add = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%lf", &tmp);
    tot += tmp;
  }

  // PRESENTED:
  // while (tot / ((double)n + (double)add) < ((double)k - 0.5)) {
  //   tot += k;
  //   ++add;
  // }

  // NEW:
  while (tot / (n + add) < (k - 0.5)) {
    tot += k;
    ++add;
  }

  printf("%d", add);

  return 0;
}

/*
  Name:                   Straight «A»
  URL:                    https://codeforces.com/problemset/problem/810/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Noora is a student of one famous high school. It's her final year in school —
  she is going to study in university next year. However, she has to get an «A»
  graduation certificate in order to apply to a prestigious one.

  In school, where Noora is studying, teachers are putting down marks to the
  online class register, which are integers from 1 to k. The worst mark is 1,
  the best is k. Mark that is going to the certificate, is calculated as an
  average of all the marks, rounded to the closest integer. If several answers
  are possible, rounding up is produced. For example, 7.3 is rounded to 7,
  but 7.5 and 7.8784 — to 8.

  For instance, if Noora has marks [8, 9], then the mark to the certificate is
  9, because the average is equal to 8.5 and rounded to 9, but if the marks are
  [8, 8, 9], Noora will have graduation certificate with 8.

  To graduate with «A» certificate, Noora has to have mark k.

  Noora got n marks in register this year. However, she is afraid that her marks
  are not enough to get final mark k. Noora decided to ask for help in the
  internet, where hacker Leha immediately responded to her request. He is ready
  to hack class register for Noora and to add Noora any number of additional
  marks from 1 to k. At the same time, Leha want his hack be unseen to everyone,
  so he decided to add as less as possible additional marks. Please help Leha to
  calculate the minimal number of marks he has to add, so that final Noora's
  mark will become equal to k.

  Input:

  The first line contains two integers n and k (1 ≤ n ≤ 100, 1 ≤ k ≤ 100)
  denoting the number of marks, received by Noora and the value of highest
  possible mark.

  The second line contains n integers a 1, a 2, ..., a n (1 ≤ a i ≤ k) denoting
  marks received by Noora before Leha's hack.

  Output:

  Print a single integer — minimal number of additional marks, that Leha has to
  add in order to change Noora's final mark to k.

*/
