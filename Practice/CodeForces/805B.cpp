// -*- compile-command: "g++ -Wall 805B.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/01/20 1:06 PM
 * URL: https://codeforces.com/problemset/problem/805/B
 * Speed: 18m 7s
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
  int d;
  string s;
  int count = 0;
  char n = 'a';
  scanf("%d", &d);

  for (int i = 0; i < d; ++i) {
    if (count < 2) {
      s += n;
      ++count;
    } else {
      count = 1;
      n = (n == 'a') ? 'b' : 'a';
      s += n;
    }
  }
  cout << s;

  return 0;
}

/*
  Name:                   3-palindrome
  URL:                    https://codeforces.com/problemset/problem/805/B
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  In the beginning of the new year Keivan decided to reverse his name. He
  doesn't like palindromes, so he changed Naviek to Navick.

  He is too selfish, so for a given n he wants to obtain a string of n
  characters, each of which is either 'a', 'b' or 'c', with no palindromes of
  length 3 appearing in the string as a substring. For example, the strings
  "abc" and "abca" suit him, while the string "aba" doesn't. He also want the
  number of letters 'c' in his string to be as little as possible.

  Input:

  The first line contains single integer n (1 ≤ n ≤ 2·105) — the length of the
  string.

  Output:

  Print the string that satisfies all the constraints. If there are multiple
  answers, print any of them.

*/
