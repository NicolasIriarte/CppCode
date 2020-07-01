// -*- compile-command: "g++ -Wall 122A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/01/20 9:59 AM
 * URL: http://codeforces.com/problemset/problem/122/A
 * Speed: 51m 10s
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

bool is_lucky(llu n) {
  while (n > 0) {
    if (n % 10 != 4 && n % 10 != 7) {
      return false;
    }
    n = n / 10;
  }
  return true;
}

int main(int argc, char **argv) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  llu n;
  bool valid = false;
  cin >> n;

  if (is_lucky(n)) {
    cout << "YES";
    return 0;
  } else {
    for (llu i = 1; i < n; ++i) {
      if (is_lucky(i) && n % i == 0) {
        valid = true;
      }
    }
  }

  if (valid) {
    cout << "YES";
  } else
    cout << "NO";

  return 0;
}

/*
  Name:                   Lucky Division
  URL:                    http://codeforces.com/problemset/problem/122/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Petya loves lucky numbers. Everybody knows that lucky numbers are positive
  integers whose decimal representation contains only the lucky digits 4 and 7.
  For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

  Petya calls a number almost lucky if it could be evenly divided by some lucky
  number. Help him find out if the given number n is almost lucky.

  Input:

  The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs
  to be checked.

  Output:

  In the only line print "YES" (without the quotes), if number n is almost
  lucky. Otherwise, print "NO" (without the quotes).

*/
