// -*- compile-command: "g++ -Wall 1374B.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/08/20 4:00 PM
 * URL: https://codeforces.com/problemset/problem/1374/B
 * Speed: 8m 8s
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
  int cant;
  ll num;
  scanf("%d", &cant);
  for (int i = 0; i < cant; ++i) {
    scanf("%lld", &num);
    int times = 0;
    while (num != 1 && num != -1) {
      if (num % 6 == 0)
        num /= 6;
      else
        num *= 2;
      ++times;
      if (times > 100) {
        times = -1;
        break;
      }
    }
    cout << times << '\n';
  }

  return 0;
}

/*
  Name:                   Multiply by 2, divide by 6
  URL:                    https://codeforces.com/problemset/problem/1374/B
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  You are given an integer n. In one move, you can either multiply n by two or
  divide n by 6 (if it is divisible by 6 without the remainder).

  Your task is to find the minimum number of moves needed to obtain 1 from n or
  determine if it's impossible to do that.

  You have to answer t independent test cases.

  Input:

  The first line of the input contains one integer t (1≤t≤2⋅10^4) — the number
  of test cases. Then t test cases follow.

  The only line of the test case contains one integer n (1≤n≤10^9).

  Output:

  For each test case, print the answer — the minimum number of moves needed to
  obtain 1 from n if it's possible to do that or -1 if it's impossible to obtain
  1 from n.

*/
