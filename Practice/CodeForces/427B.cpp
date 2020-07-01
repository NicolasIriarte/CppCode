// -*- compile-command: "g++ -Wall 427B.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/01/20 2:24 PM
 * URL: https://codeforces.com/problemset/problem/427/B
 * Speed: > 1 hs
 */

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int llu;
typedef long long int ll;

const double PI = 3.14159265358979323846264338;
const ll MOD = 1e9 + 7;
#define INF 1000000000000000000ll

template <typename T> void bug(T data) { cout << "Here! " << data << '\n'; }
void bug() { cout << "Here!" << '\n'; }

int main(int argc, char **argv) {
  llu n, t, c;
  llu tmp;
  int dist = 0;
  int val = 0;

  scanf("%llu %llu %llu", &n, &t, &c);
  for (llu i = 0; i < n; ++i) {
    scanf("%llu", &tmp);
    if (tmp > t)
      dist = -1;
    if (dist < c - 1) {
      ++dist;
    } else {
      if (tmp > t)
        dist = 0;
      else
        ++val;
    }
  }
  cout << val;
  return 0;
}

/*
  Name:                   Prison Transfer
  URL:                    https://codeforces.com/problemset/problem/427/B
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  The prison of your city has n prisoners. As the prison can't accommodate all
  of them, the city mayor has decided to transfer c of the prisoners to a prison
  located in another city.

  For this reason, he made the n prisoners to stand in a line, with a number
  written on their chests. The number is the severity of the crime he/she has
  committed. The greater the number, the more severe his/her crime was.

  Then, the mayor told you to choose the c prisoners, who will be transferred to
  the other prison. He also imposed two conditions. They are,

  1. The chosen c prisoners has to form a contiguous segment of prisoners.

  2. Any of the chosen prisoner's crime level should not be greater then t.
  Because, that will make the prisoner a severe criminal and the mayor doesn't
  want to take the risk of his running away during the transfer.

  Find the number of ways you can choose the c prisoners.

  Input:

  The first line of input will contain three space separated integers n
  (1 ≤ n ≤ 2·10^5), t (0 ≤ t ≤ 10^9) and c (1 ≤ c ≤ n). The next line will
  contain n space separated integers, the i th integer is the severity i th
  prisoner's crime. The value of crime severities will be non-negative and will
  not exceed 10^9.

  Output:

  Print a single integer — the number of ways you can choose the c prisoners.

*/
