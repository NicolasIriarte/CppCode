// -*- compile-command: "g++ -Wall 1385A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/17/20 11:40 AM
 * URL: https://codeforces.com/problemset/problem/1385/A
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
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    std::vector<int> v(3);
    scanf("%d %d %d", &v[0], &v[1], &v[2]);
    std::sort(v.begin(), v.end());
    if (v[1] == v[2])
      cout << "YES\n" << v[2] << " " << v[0] << " " << v[0] << '\n';
    else
      cout << "NO\n";
  }

  return 0;
}

/*
  Name:                   Three Pairwise Maximums
  URL:                    https://codeforces.com/problemset/problem/1385/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  You are given three positive (i.e. strictly greater than zero) integers x, y
  and z.

  Your task is to find positive integers a, b and c such that x=max(a,b),
  y=max(a,c) and z=max(b,c), or determine that it is impossible to find such a,
  b and c.

  You have to answer t independent test cases. Print required a, b and c in any
  (arbitrary) order.

  Input:

  The first line of the input contains one integer t (1≤t≤2⋅10^4) — the number of
  test cases. Then t test cases follow.

  The only line of the test case contains three integers x, y, and z
  (1≤x,y,z≤10^9).

  Output:

  For each test case, print the answer:

  "NO" in the only line of the output if a solution doesn't exist;
  or "YES" in the first line and any valid triple of positive integers a, b and
  c (1≤a,b,c≤10^9) in the second line. You can print a, b and c in any order.

*/
