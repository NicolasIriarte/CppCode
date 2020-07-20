// -*- compile-command: "g++ -Wall 1372A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/18/20 6:17 PM
 * URL: https://codeforces.com/problemset/problem/1372/A
 * Speed: 3m 36s
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
    for (int j = 0; j < n; ++j) {
      cout << "1 ";
    }
    cout << '\n';
  }

  return 0;
}

/*
  Name:                   Omkar and Completion
  URL:                    https://codeforces.com/problemset/problem/1372/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  You have been blessed as a child of Omkar. To express your gratitude, please
  solve this problem for Omkar!

  An array a of length n is called complete if all elements are positive and
  don't exceed 1000, and for all indices x,y,z (1≤x,y,z≤n), ax+ay≠az (not
  necessarily distinct).

  You are given one integer n. Please find any complete array of length n. It is
  guaranteed that under given constraints such array exists.

  Input:

  Each test contains multiple test cases. The first line contains t (1≤t≤1000)
  — the number of test cases. Description of the test cases follows.

  The only line of each test case contains one integer n (1≤n≤1000).

  It is guaranteed that the sum of n over all test cases does not exceed 1000.

  Output:

  For each test case, print a complete array on a single line. All elements have
  to be integers between 1 and 1000 and for all indices x,y,z (1≤x,y,z≤n) (not
  necessarily distinct), ax+ay≠az must hold.

  If multiple solutions exist, you may print any.

*/
