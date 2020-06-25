// -*- compile-command: "g++ -Wall 71A.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/25/20 6:28 PM
 * URL: https://codeforces.com/problemset/problem/71/A
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(int argc, char **argv) {
  int n;
  std::string s;
  std::vector<std::string> w;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> s;
    w.push_back(s);
  }
  for (auto &e : w) {
    s.clear();
    if (e.size() > 10) {
      s.append(1, e[0]);
      s += std::to_string(e.size() - 2);
      s.append(1, e[e.size() - 1]);
    } else {
      s = e;
    }
    std::cout << s << '\n';
  }

  return 0;
}

/*
  Name:                      Way Too Long Words
  URL:                       https://codeforces.com/problemset/problem/71/A
  Time limit per test:       1 seconds.
  Memory limit per test:     256 megabytes.
  Input:                     standart input.
  Output:                    standart output.

  Description:

  Sometimes some words like "localization" or "internationalization" are so long
  that writing them many times in one text is quite tiresome.

  Let's consider a word too long, if its length is strictly more than 10
  characters. All too long words should be replaced with a special abbreviation.

  This abbreviation is made like this: we write down the first and the last
  letter of a word and between them we write the number of letters between the
  first and the last letters. That number is in decimal system and doesn't
  contain any leading zeroes.

  Thus, "localization" will be spelt as "l10n", and "internationalization» will
  be spelt as "i18n".

  You are suggested to automatize the process of changing the words with
  abbreviations. At that all too long words should be replaced by the
  abbreviation and the words that are not too long should not undergo any
  changes.

  Input

  The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n
  lines contains one word. All the words consist of lowercase Latin letters and
  possess the lengths of from 1 to 100 characters.

  Output

  Print n lines. The i-th line should contain the result of replacing of the
  i-th word from the input data.

*/
