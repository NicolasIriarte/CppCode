// -*- compile-command: "g++ -Wall 102397H.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 7:01 PM
 * URL: https://codeforces.com/gym/102397/H
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

ll n, a[100010];
ll M = 1e9 + 7;

unordered_map<ll, ll> m;

ll power(ll x, ll a) {
  if (a == 0)
    return 1;
  if (a == 1)
    return x;
  if (a % 2 == 0)
    return power((x * x) % M, a / 2);
  return (x * power((x * x) % M, a / 2)) % M;
}

int main() {
  cin >> n;
  for (ll i = 0; i < n; i++)
    cin >> a[i];

  for (ll i = 0; i < n; i++)
    m[a[i]]++;

  ll tot = 0;

  for (ll i = 1; i <= 100000; i++)
    tot = (tot + power(2, m[i]) - 1 + M) % M;

  cout << tot << "\n";

  return 0;
}
