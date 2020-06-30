// -*- compile-command: "g++ -Wall 1201A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/29/20 5:54 PM
 * URL: https://codeforces.com/problemset/problem/1201/A
 * Speed: Abandoned before an hour
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

  ll m, num;

  scanf("%lld %lld", &num, &m);

  string arr[num];
  for (ll i = 0; i < num; i++) {
    cin >> arr[i];
  }

  ll aa[m];
  for (ll j = 0; j < m; j++) {
    cin >> aa[j];
  }

  ll ans = 0;

  for (long long i = 0; i < m; i++) {
    std::map<char, long long> mp;
    std::map<char, long long>::iterator it;
    long long cnt = 0;
    for (long long j = 0; j < num; j++) {
      mp[arr[j][i]]++;
    }

    for (it = mp.begin(); it != mp.end(); ++it) {
      if (it->second > cnt)
        cnt = it->second;
    }

    ans += cnt * aa[i];
  }

  printf("%lld", ans);
  return 0;
}

/*
  Name:                   Important Exam
  URL:                    https://codeforces.com/problemset/problem/1201/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  A class of students wrote a multiple-choice test.

  There are n
  students in the class. The test had m questions, each of them had 5 possible
  answers (A, B, C, D or E). There is exactly one correct answer for each
  question. The correct answer for question i worth ai

  points. Incorrect answers are graded with zero points.

  The students remember what answers they gave on the exam, but they don't know
  what are the correct answers. They are very optimistic, so they want to know
  what is the maximum possible total score of all students in the class.

  Input:

  he first line contains integers n and m (1≤n,m≤1000) — the number of students
  in the class and the number of questions in the test.

  Each of the next n lines contains string si (|si|=m), describing an answer of
  the i-th student. The j-th character represents the student answer (A, B, C,
  D or E) on the j-th question.

  The last line contains m
  integers a1,a2,…,am (1≤ai≤1000) — the number of points for the correct answer
  for every question.

  Output:

  Print a single integer — the maximum possible total score of the class.
  
  NOTE:
  
  I have a big issue with this problem, I doen't understand well the problem
  itself, and I doesn't realice that I must use maps to locate easyly the
  elements by a given 'char'.

*/
