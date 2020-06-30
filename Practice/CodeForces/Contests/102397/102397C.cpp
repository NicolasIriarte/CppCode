// -*- compile-command: "g++ -Wall 102397C.cpp -o a && cat in.txt | ./a; rm a" -*-

/* 
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 12:59 PM
 * URL: https://codeforces.com/gym/102397/C
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  int x, y;
  string s;
  cin >> x >> y;
  cin >> s;
  for(auto &c : s){
    if(c == 'U')
      ++y;
    if(c == 'D')
      --y;
    if(c == 'L')
      --x;
    if(c == 'R')
      ++x;
    
  }

  cout << x << " " << y;
  
  return 0;
}

