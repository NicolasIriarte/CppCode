// -*- compile-command: "g++ -Wall 1374C.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/08/20 3:31 PM
 * URL: https://codeforces.com/problemset/problem/1374/C
 * Speed: 14m 11s
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
  int times;
  int num;
  char pos;
  int output;
  int tot;
  scanf("%d", &times);
  for (int i = 0; i < times; ++i) {
    scanf("%d", &num);
    output = 0;
    tot = 0;
    for (int j = 0; j <= num; ++j) {
      scanf("%c", &pos);
      if (pos == '\n')
        continue;
      if (pos == '(')
        ++output;
      else
        --output;

      if (output < 0) {
        ++tot;
        output = 0;
      }

      // cout << pos;
    }
    cout << tot << '\n';
  }

  return 0;
}

/*
  Name:                   Move Brackets
  URL:                    https://codeforces.com/problemset/problem/1374/C
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  You are given a bracket sequence s of length n, where n is even (divisible by
  two). The string s consists of n2 opening brackets '(' and n2 closing brackets
  ')'.

  In one move, you can choose exactly one bracket and move it to the beginning
  of the string or to the end of the string (i.e. you choose some index i,
  remove the i-th character of s and insert it before or after all remaining
  characters of s).

  Your task is to find the minimum number of moves required to obtain regular
  bracket sequence from s. It can be proved that the answer always exists under
  the given constraints.

  Recall what the regular bracket sequence is:

  1. "()" is regular bracket sequence.
  2. If s is regular bracket sequence then "(" + s + ")" is regular bracket
  sequence;
  3. if s and t are regular bracket sequences then s + t is regular
  bracket sequence.

  For example, "()()", "(())()", "(())" and "()" are regular
  bracket sequences, but ")(", "()(" and ")))" are not.

  You have to answer t independent test cases.

  Input:

  The first line of the input contains one integer t (1≤t≤2000) — the number of
  test cases. Then t test cases follow.

  The first line of the test case contains one integer n (2≤n≤50) — the length
  of s. It is guaranteed that n is even. The second line of the test case
  containg the string s consisting of n2 opening and n2 closing brackets.

  Output:

  For each test case, print the answer — the minimum number of moves required to
  obtain regular bracket sequence from s. It can be proved that the answer
  always exists under the given constraints.

*/
