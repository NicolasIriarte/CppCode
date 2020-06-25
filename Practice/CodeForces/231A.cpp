// -*- compile-command: "g++ -g -Wall 231A.cpp -o 231A && cat in.txt | ./231A" -*-

/* 
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/25/20 5:51 PM
 * URL: 
 */

// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(int argc, char **argv) {
  int n;
  cin >> n;
  int a,b,c;
  int tot = 0;
  for(int i = 0; i < n; ++i){
    cin >> a >> b >> c;
    a += b + c;
    if (a > 1)
      ++tot;
  }
  cout << tot;
  return 0;
}

/*
  Name:                      Team
  URL:                       https://codeforces.com/problemset/problem/231/A
  Time limit per test:       2 seconds.
  Memory limit per test:     256 megabytes.
  Input:                     standart input.
  Output:                    standart output.

  Description:
  
  One day three best friends Petya, Vasya and Tonya decided to form a team and
  take part in programming contests. Participants are usually offered several
  problems during programming contests. Long before the start the friends
  decided that they will implement a problem if at least two of them are sure
  about the solution. Otherwise, the friends won't write the problem's solution.

  This contest offers n problems to the participants. For each problem we know,
  which friend is sure about the solution. Help the friends find the number of
  problems for which they will write a solution.

  Input:
  
  The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number
  of problems in the contest. Then n lines contain three integers each, each
  integer is either 0 or 1. If the first number in the line equals 1, then Petya
  is sure about the problem's solution, otherwise he isn't sure. The second
  number shows Vasya's view on the solution, the third number shows Tonya's
  view. The numbers on the lines are separated by spaces.

  Output:
  
  Print a single integer — the number of problems the friends will implement on
  the contest.

*/

