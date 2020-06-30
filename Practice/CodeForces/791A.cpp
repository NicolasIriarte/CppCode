// -*- compile-command: "g++ -Wall 791A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/29/20 3:18 PM
 * URL: https://codeforces.com/problemset/problem/791/A
 * Speed: 3m 40s
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
  int a, b;
  scanf("%d %d", &a, &b);

  int i = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    ++i;
  }
  printf("%d", i);

  return 0;
}

/*
  Name:                   Bear and Big Brother
  URL:                    https://codeforces.com/problemset/problem/791/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Bear Limak wants to become the largest of bears, or at least to become larger
  than his brother Bob.

  Right now, Limak and Bob weigh a and b respectively. It's guaranteed that
  Limak's weight is smaller than or equal to his brother's weight.

  Limak eats a lot and his weight is tripled after every year, while Bob's
  weight is doubled after every year.

  After how many full years will Limak become strictly larger (strictly heavier)
  than Bob?

  Input:

  The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) —
  the weight of Limak and the weight of Bob respectively.

  Output:

  Print one integer, denoting the integer number of years after which Limak will
  become strictly larger than Bob.

*/
