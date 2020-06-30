// -*- compile-command: "g++ -Wall 116A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/29/20 1:56 PM
 * URL: https://codeforces.com/problemset/problem/116/A
 * Speed: 10m 12s
 */

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int llu;
typedef long long int ll;

#define ve vector
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>

#define endl '\n'

const double PI = 3.14159265358979323846264338;
const ll MOD = 1e9 + 7;
#define INF 1000000000000000000ll
#define MAX_TYPE(t) std::numeric_limits<t>::max()
#define MIN_TYPE(t) std::numeric_limits<t>::min()

#define PRECISE cout.precision(18)
#define FAST                                                                   \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)

#define srt(x) (sort(all(v)))
#define rsrt(v) sort(all(v), greater<ll>())
#define maxp(v) (max_element(v.begin(), v.end()) - v.begin())
#define minp(v) (min_element(v.begin(), v.end()) - v.begin())
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())

#define pb push_back
#define pf push_front

#define f front
#define b back
#define F first
#define S second
#define all(v) v.begin(), v.end()

#define FOR(i, s, b) for (int i = s; i < b; ++i)
#define FORR(i, s, b) for (int i = b - 1; i >= 0; --i)
#define FORE(i, v) for (auto &i : v)

#define sz(x) (lli)(x.size())
#define P(e, s) cout << e << s

template <typename T> void bug(T data) { cout << "Here! " << data << endl; }
void bug() { cout << "Here!" << endl; }

int main(int argc, char **argv) {
  FAST;
  int stps;
  int max = -1;
  int accu = 0;
  int a, b;

  cin >> stps;

  FOR(i, 0, stps) {
    cin >> a >> b;
    accu += (b - a);
    if (accu > max)
      max = accu;
  }

  P(max, "");
  return 0;
}

/*
  Name:                   Tram
  URL:                    https://codeforces.com/problemset/problem/116/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n
  in the order of tram's movement. At the i-th stop a i passengers exit the
  tram, while b i passengers enter it. The tram is empty before it arrives at
  the first stop. Also, when the tram arrives at the last stop, all passengers
  exit so that it becomes empty.

  Your task is to calculate the tram's minimum capacity such that the number of
  people inside the tram at any time never exceeds this capacity. Note that at
  each stop all exiting passengers exit before any entering passenger enters the
  tram.

  Input:

  The first line contains a single number n (2 ≤ n ≤ 1000) — the number of the
  tram's stops.

  Then n lines follow, each contains two integers a i and b i (0 ≤ a i, b
  i ≤ 1000) — the number of passengers that exits the tram at the i-th stop, and
  the number of passengers that enter the tram at the i-th stop. The stops are
  given from the first to the last stop in the order of tram's movement.

  The number of people who exit at a given stop does not exceed the total number
  of people in the tram immediately before it arrives at the stop. This
  particularly means that a1 = 0.

  At the last stop, all the passengers exit the tram and it becomes empty.

  No passenger will enter the train at the last stop. That is, bn = 0.

  Output:

  Print a single integer denoting the minimum possible capacity of the tram (0
  is allowed).

*/
