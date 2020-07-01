// -*- compile-command: "g++ -Wall 69A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/01/20 9:44 AM
 * URL: https://codeforces.com/problemset/problem/69/A
 * Speed: 8m 37s
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
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;

  ll x, y, z;
  ll x1, y1, z1;

  x = y = z = 0;
  x1 = y1 = z1 = 0;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> x1 >> y1 >> z1;

    x += x1;
    y += y1;
    z += z1;
  }

  if (!x && !y && !z)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}

/*
  Name:                   Young Physicist
  URL:                    https://codeforces.com/problemset/problem/69/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  A guy named Vasya attends the final grade of a high school. One day Vasya
  decided to watch a match of his favorite hockey team. And, as the boy loves
  hockey very much, even more than physics, he forgot to do the homework.
  Specifically, he forgot to complete his physics tasks. Next day the teacher
  got very angry at Vasya and decided to teach him a lesson. He gave the lazy
  student a seemingly easy task: You are given an idle body in space and the
  forces that affect it. The body can be considered as a material point with
  coordinates (0; 0; 0). Vasya had only to answer whether it is in equilibrium.
  "Piece of cake" — thought Vasya, we need only to check if the sum of all
  vectors is equal to 0. So, Vasya began to solve the problem. But later it
  turned out that there can be lots and lots of these forces, and Vasya can not
  cope without your help. Help him. Write a program that determines whether a
  body is idle or is moving by the given vectors of forces.

  Input:

  The first line contains a positive integer n (1 ≤ n ≤ 100), then follow n
  lines containing three integers each: the x i coordinate, the y i coordinate
  and the z i coordinate of the force vector, applied to the body ( - 100 ≤ x
  i, y i, z i ≤ 100).

  Output:

  Print the word "YES" if the body is in equilibrium, or the word "NO" if it is
  not.

*/
