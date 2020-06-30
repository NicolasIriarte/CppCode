// -*- compile-command: "g++ -Wall 118A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/30/20 3:35 PM
 * URL: https://codeforces.com/problemset/problem/118/A
 * Speed: 6m 51s
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

  string s;
  string invalid = "AOYEUI";
  string s2;
  cin >> s;

  for (auto &c : s) {
    c = toupper(c);

    // Presented on contest
    // if (c == 'A')
    //   ;
    // else if (c == 'O')
    //   ;
    // else if (c == 'Y')
    //   ;
    // else if (c == 'E')
    //   ;
    // else if (c == 'U')
    //   ;
    // else if (c == 'I')
    //   ;

    // New implementation
    if (std::any_of(invalid.begin(), invalid.end(),
                    [&](auto i) { return i == c; }))
      ;
    else {
      s2 += '.';
      s2 += tolower(c);
    }
  }

  cout << s2;
  return 0;
}

/*
  Name:                   String Task
  URL:                    https://codeforces.com/problemset/problem/118/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Petya started to attend programming lessons. On the first lesson his task was
  to write a simple program. The program was supposed to do the following: in
  the given string, consisting if uppercase and lowercase Latin letters, it:

  1. Deletes all the vowels.

  2. Inserts a character "." before each consonant.

  3. Replaces all uppercase consonants with corresponding lowercase ones.

  Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants.
  The program's input is exactly one string, it should return the output as a
  single string, resulting after the program's processing the initial string.

  Help Petya cope with this easy task.

  Input:

  The first line represents input string of Petya's program. This string only
  consists of uppercase and lowercase Latin letters and its length is from 1 to
  100, inclusive.

  Output:

  Print the resulting string. It is guaranteed that this string is not empty.

  NOTE:

  I Wasn't sure about what a consonan is. Some leaks on my english vocabulary.

*/
