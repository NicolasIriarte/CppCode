// -*- compile-command: "g++ -Wall 981A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/07/20 8:49 AM
 * URL: https://codeforces.com/problemset/problem/981/A
 * Speed: 16m 15s
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

bool is_palindrome(string s) {
  bool is = true;
  const int size = s.size() - 1;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != s[size - i]) {
      is = false;
      break;
    }
  }

  return is;
}

int main(int argc, char **argv) {
  string s;
  cin >> s;

  int size = s.size();
  while (is_palindrome(s) && size > 0) {
    s.erase(s.end() - 1);
    size = s.size();
  };

  cout << size;

  return 0;
}

/*
  Name:                   Antipalindrome
  URL:                    https://codeforces.com/problemset/problem/981/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  A string is a palindrome if it reads the same from the left to the right and
  from the right to the left. For example, the strings "kek", "abacaba", "r" and
  "papicipap" are palindromes, while the strings "abb" and "iq" are not.

  A substring s[l…r]
  (1 ≤ l ≤ r ≤ |s|) of a string s = s1s2…s|s| is the string slsl + 1…sr.

  Anna does not like palindromes, so she makes her friends call her Ann. She
  also changes all the words she reads in a similar way. Namely, each word s is
  changed into its longest substring that is not a palindrome. If all the
  substrings of s are palindromes, she skips the word at all.

  Some time ago Ann read the word s. What is the word she changed it into?

  Input:

  The first line contains a non-empty string s with length at most 50
  characters, containing lowercase English letters only.

  Output:

  If there is such a substring in s that is not a palindrome, print the maximum
  length of such a substring. Otherwise print 0.

  Note that there can be multiple longest substrings that are not palindromes,
  but their length is unique.

*/
