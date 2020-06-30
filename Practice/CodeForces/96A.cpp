// -*- compile-command: "g++ -Wall 96A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/30/20 5:37 PM
 * URL: https://codeforces.com/problemset/problem/96/A
 * Speed: 6m 18s
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
  string s;
  int con = 0;
  char prev = 0;
  cin >> s;

  for (auto &c : s) {
    if (c == prev) {
      ++con;
      if (con > 5)
        break;
    } else
      con = 0;
    prev = c;
  }
  ++con;
  if (con > 6)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
