// -*- compile-command: "g++ -Wall 581B.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/01/20 5:09 PM
 * URL: https://codeforces.com/problemset/problem/581/B
 * Speed: 37m 28s
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
  int n;
  int tmp;

  std::vector<int> h;
  std::vector<int> h2;

  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &tmp);
    h.push_back(tmp);
    h2.push_back(0);
  }

  int max = 0;
  bool taken = false;

  for (int i = n - 1; i >= 0; --i) {
    if (h[i] > max) {
      max = h[i];
      taken = false;
    } else if (h[i] == max) {
      taken = true;
    }

    if (h[i] == max) {
      if (taken)
        h2[i] = max - h[i] + 1;
      else
        h2[i] = max - h[i];
      // cout << "a-> " << max - h[i] << '\n';
    } else {
      // cout << "b-> " << max - h[i] << '\n';
      h2[i] = max - h[i] + 1;
    }
  }

  for (auto &c : h2) {
    cout << c << " ";
  }

  return 0;
}

/*
  Name:                   Luxurious Houses
  URL:                    https://codeforces.com/problemset/problem/581/B
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  The capital of Berland has n multifloor buildings. The architect who built up
  the capital was very creative, so all the houses were built in one row.

  Let's enumerate all the houses from left to right, starting with one. A house
  is considered to be luxurious if the number of floors in it is strictly
  greater than in all the houses with larger numbers. In other words, a house is
  luxurious if the number of floors in it is strictly greater than in all the
  houses, which are located to the right from it. In this task it is assumed
  that the heights of floors in the houses are the same.

  The new architect is interested in n questions, i-th of them is about the
  following: "how many floors should be added to the i-th house to make it
  luxurious?" (for all i from 1 to n, inclusive). You need to help him cope with
  this task.

  Note that all these questions are independent from each other — the answer to
  the question for house i does not affect other answers (i.e., the floors to
  the houses are not actually added).

  Input:

  The first line of the input contains a single number n (1 ≤ n ≤ 10^5) — the
  number of houses in the capital of Berland.

  The second line contains n space-separated positive integers h i (1 ≤ h
  i ≤ 10^9), where h i equals the number of floors in the i-th house.

  Output:

  Print n integers a 1, a 2, ..., a n, where number a i is the number of floors
  that need to be added to the house number i to make it luxurious. If the house
  is already luxurious and nothing needs to be added to it, then a i should be
  equal to zero.

  All houses are numbered from left to right, starting from one.
*/
