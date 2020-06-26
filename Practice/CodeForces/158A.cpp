// -*- compile-command: "g++ -Wall 158A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/25/20 7:10 PM
 * URL: https://codeforces.com/problemset/problem/158/A
 * Speed: 17:20
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(int argc, char **argv) {
  int n, k;
  vector<int> r;
  cin >> n >> k;
  int tot = 0;
  // Uploading?
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    r.push_back(tmp);
  }

  for (auto &i : r) {
    if (i > 0 && i >= r[k - 1]) {
      ++tot;
    }
  }

  cout << tot;

  return 0;
}

/*
  Name:                   Next Round
  URL:                    https://codeforces.com/problemset/problem/158/A
  Time limit per test:    3 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  "Contestant who earns a score equal to or greater than the k-th place
  finisher's score will advance to the next round, as long as the contestant
  earns a positive score..." — an excerpt from contest rules.

  A total of n participants took part in the contest (n ≥ k), and you already
  know their scores. Calculate how many participants will advance to the next
  round.

  Input:

  The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50)
  separated by a single space.

  The second line contains n space-separated integers a1, a2, ..., an
  (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the
  i-th place. The given sequence is non-increasing (that is, for all i from 1 to
  n - 1 the following condition is fulfilled: ai ≥ ai + 1).

  Output:

  Output the number of participants who advance to the next round.

*/
