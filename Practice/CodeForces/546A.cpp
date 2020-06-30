// -*- compile-command: "g++ -Wall 546A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/29/20 1:21 PM
 * URL: https://codeforces.com/problemset/problem/546/A
 * Speed: 27m 23s
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
  int k, n, w;
  int x = 0;
  cin >> k >> n >> w;

  FOR(i, 0, w) { x += (k * (i + 1)); }
  if (x > n)
    P(x - n, "");
  else
    P("0", "");

  return 0;
}

/*
  Name:                   Soldier and Bananas
  URL:                    https://codeforces.com/problemset/problem/546/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:



  A soldier wants to buy w bananas in the shop. He has to pay k dollars for the
  first banana, 2k dollars for the second one and so on (in other words, he has
  to pay i·k dollars for the i-th banana).

  He has n dollars. How many dollars does he have to borrow from his friend
  soldier to buy w bananas?

  Input:

  The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000,
  0 ≤ n ≤ 109), the cost of the first banana, initial number of dollars the
  soldier has and number of bananas he wants.

  Output:

  Output one integer — the amount of dollars that the soldier must borrow from
  his friend. If he doesn't have to borrow money, output 0.

  NOTES:

  On the resolution of this problem I have two bigs issues:

  1. I didn't understand the problem. On the for loop I was trying to do x += (k
  + i) instead. And i thought that the problem was wrong (Instead of me).

  2. The page was very slow, it took at least 1 minute to run all the test.

*/
