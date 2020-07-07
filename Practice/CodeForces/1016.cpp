// -*- compile-command: "g++ -Wall 1016.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/01/20 6:52 PM
 * URL: https://codeforces.com/problemset/problem/1016/A
 * Speed: 13m 37s
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
  llu n, m;
  std::vector<llu> days;
  llu tmp;
  scanf("%llu %llu", &n, &m);

  for (int i = 0; i < n; ++i) {
    scanf("%llu", &tmp);
    days.push_back(tmp);
  }

  tmp = 0;
  for (auto &i : days) {
    printf("%llu ", (i + tmp) / m);
    tmp = (i + tmp) % m;
  }

  return 0;
}

/*
  Name:                   Death Note
  URL:                    https://codeforces.com/problemset/problem/1016/A
  Time limit per test:    2 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  You received a notebook which is called Death Note. This notebook has infinite
  number of pages. A rule is written on the last page (huh) of this notebook. It
  says: "You have to write names in this notebook during n consecutive days.
  During the i-th day you have to write exactly ai names.". You got scared (of
  course you got scared, who wouldn't get scared if he just receive a notebook
  which is named Death Note with a some strange rule written in it?).

  Of course, you decided to follow this rule. When you calmed down, you came up
  with a strategy how you will write names in the notebook. You have calculated
  that each page of the notebook can contain exactly m names. You will start
  writing names from the first page. You will write names on the current page as
  long as the limit on the number of names on this page is not exceeded. When
  the current page is over, you turn the page. Note that you always turn the
  page when it ends, it doesn't matter if it is the last day or not. If after
  some day the current page still can hold at least one name, during the next
  day you will continue writing the names from the current page.

  Now you are interested in the following question: how many times will you turn
  the page during each day? You are interested in the number of pages you will
  turn each day from 1 to n.

  Input:

  The first line of the input contains two integers n, m (1≤n≤2⋅10^5, 1≤m≤10^9)
  — the number of days you will write names in the notebook and the number of
  names which can be written on each page of the notebook.

  The second line contains n integers a1,a2,…,an (1≤ai≤10^9), where ai means the
  number of names you will write in the notebook during the i-th day.

  Output:

  Print exactly n integers t1,t2,…,tn, where ti is the number of times you will
  turn the page during the i-th day.

*/
