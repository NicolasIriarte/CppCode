// -*- compile-command: "g++ -Wall 263A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/26/20 6:32 PM
 * URL: https://codeforces.com/problemset/problem/263/A
 * Speed: 9m 53s
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(int argc, char **argv) {
  int mat[5][5];
  int x, y;
  int tot = 0;
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cin >> mat[i][j];
      if (mat[i][j] == 1) {
        x = i;
        y = j;
      }
    }
  }

  if (x > 2)
    tot += x - 2;
  else
    tot -= x - 2;

  if (y > 2)
    tot += y - 2;
  else
    tot -= y - 2;

  cout << tot;

  return 0;
}

/*
  Name:                   Beautiful Matrix
  URL:                    https://codeforces.com/problemset/problem/263/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one.
  Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's
  index the matrix columns by numbers from 1 to 5 from left to right. In one
  move, you are allowed to apply one of the two following transformations to the
  matrix:

  1. Swap two neighboring matrix rows, that is, rows with indexes i and i + 1
  for some integer i (1 ≤ i < 5).

  2. Swap two neighboring matrix columns, that is,
  columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).

  You think that a matrix looks beautiful, if the single number one of the
  matrix is located in its middle (in the cell that is on the intersection of
  the third row and the third column). Count the minimum number of moves needed
  to make the matrix beautiful.

  Input:

  The input consists of five lines, each line contains five integers: the j-th
  integer in the i-th line of the input represents the element of the matrix
  that is located on the intersection of the i-th row and the j-th column. It is
  guaranteed that the matrix consists of 24 zeroes and a single number one.

  Output:

  Print a single integer — the minimum number of moves needed to make the matrix
  beautiful.

*/
