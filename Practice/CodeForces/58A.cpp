// -*- compile-command: "g++ -Wall 58A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/30/20 7:25 PM
 * URL: https://codeforces.com/problemset/problem/58/A
 * Speed: 29m 31s
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
  string s;
  string out;
  int pos = 0;
  string valid = "hello";
  cin >> s;

  for (int j = 0; j < s.size(); ++j) {
    if (s[j] == valid[pos]) {
      out += s[j];
      ++pos;
    }
  }

  if (!out.compare(valid))
    cout << "YES";
  else
    cout << "NO";
  return 0;
}

/*
  Name:                   Chat room
  URL:                    https://codeforces.com/problemset/problem/58/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Vasya has recently learned to type and log on to the Internet. He immediately
  entered a chat room and decided to say hello to everybody. Vasya typed the
  word s. It is considered that Vasya managed to say hello if several letters
  can be deleted from the typed word so that it resulted in the word "hello".
  For example, if Vasya types the word "ahhellllloou", it will be considered
  that he said hello, and if he types "hlelo", it will be considered that Vasya
  got misunderstood and he didn't manage to say hello. Determine whether Vasya
  managed to say hello by the given word s.

  Input:

  The first and only line contains the word s, which Vasya typed. This word
  consisits of small Latin letters, its length is no less that 1 and no more
  than 100 letters.

  Output:

  If Vasya managed to say hello, print "YES", otherwise print "NO".

  Notes:

  Made two wrong implementations. The third-one was the succesfull.

*/
