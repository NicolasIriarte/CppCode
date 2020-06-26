// -*- compile-command: "g++ -Wall 282A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/26/20 4:49 PM
 * URL: https://codeforces.com/problemset/problem/282/A
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(int argc, char **argv) {
  int x = 0;
  int n;
  string c;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> c;
    if (c[1] == '+')
      ++x;
    else
      --x;
  }

  cout << x;
  return 0;
}

/*
  Name:                   Bit++
  URL:                    https://codeforces.com/problemset/problem/282/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  The classic programming language of Bitland is Bit++. This language is so
  peculiar and complicated.

  The language is that peculiar as it has exactly one variable, called x. Also,
  there are two operations:

  Operation ++ increases the value of variable x by 1.
  Operation -- decreases the value of variable x by 1.

  A statement in language Bit++ is a sequence, consisting of exactly one
  operation and one variable x. The statement is written without spaces, that
  is, it can only contain characters "+", "-", "X". Executing a statement means
  applying the operation it contains.

  A programme in Bit++ is a sequence of statements, each of them needs to be
  executed. Executing a programme means executing all the statements it
  contains.

  You're given a programme in language Bit++. The initial value of x is 0.
  Execute the programme and find its final value (the value of the variable when
  this programme is executed).

  Input:

  The first line contains a single integer n (1 ≤ n ≤ 150) — the number of
  statements in the programme.

  Next n lines contain a statement each. Each statement contains exactly one
  operation (++ or --) and exactly one variable x (denoted as letter «X»). Thus,
  there are no empty statements. The operation and the variable can be written
  in any order.

  Output:

  Print a single integer — the final value of x.

*/
