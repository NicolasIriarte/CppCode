// -*- compile-command: "g++ -Wall 1373B.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/08/20 4:41 PM
 * URL: https://codeforces.com/problemset/problem/1373/B
 * Speed: 19m 45s
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
  int num;
  string s;
  scanf("%d", &num);
  for (int i = 0; i < num; ++i) {
    cin >> s;
    int cont = 0;
    int change = 0;
    for (auto &c : s) {
      if (c == '0') {
        if (cont > 0)
          ++change;
        --cont;
      } else {
        if (cont < 0)
          ++change;
        ++cont;
      }
    }
    if (change % 2 == 1)
      cout << "DA\n";
    else
      cout << "NET\n";
  }

  return 0;
}

/*
  Name:                   01 Game
  URL:                    https://codeforces.com/problemset/problem/1373/B
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Alica and Bob are playing a game.

  Initially they have a binary string s consisting of only characters 0 and 1.

  Alice and Bob make alternating moves: Alice makes the first move, Bob makes
  the second move, Alice makes the third one, and so on. During each move, the
  current player must choose two different adjacent characters of string s and
  delete them. For example, if s=1011001 then the following moves are possible:

  delete s1 and s2: 1011001→11001.
  delete s2 and s3: 1011001→11001.
  delete s4 and s5: 1011001→10101.
  delete s6 and s7: 1011001→10110.

  If a player can't make any move, they lose. Both players play optimally. You
  have to determine if Alice can win.

  Input:

  First line contains one integer t (1≤t≤1000) — the number of test cases.

  Only line of each test case contains one string s (1≤|s|≤100), consisting of
  only characters 0 and 1.

  Output:

  For each test case print answer in the single line.

  If Alice can win print DA (YES in Russian) in any register. Otherwise print
  NET (NO in Russian) in any register.

*/
