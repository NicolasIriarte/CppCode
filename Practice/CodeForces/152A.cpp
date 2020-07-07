// -*- compile-command: "g++ -Wall 152A.cpp -o a && cat in.txt | ./a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 07/07/20 7:06 AM
 * URL: https://codeforces.com/problemset/problem/152/A
 * Speed: 1h 5m 35s
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
  int n, m;
  string tmp;
  std::vector<string> notes;
  scanf("%d %d", &n, &m);

  std::vector<int> best(m, 0);

  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    notes.push_back(tmp);
    // work
  }

  for (int i = 0; i < m; ++i) {
    int max = 0;
    for (int j = 0; j < n; ++j) {
      if (notes[j][i] > max) {
        max = notes[j][i];
      }
    }
    for (int j = 0; j < n; ++j) {
      if (notes[j][i] < max) {
        notes[j][i] = '0';
      }
    }
  }

  int tot = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (notes[i][j] != '0') {
        ++tot;
        break;
      }
    }
  }

  printf("%d", tot);

  return 0;
}

/*
  Name:                   Marks
  URL:                    https://codeforces.com/problemset/problem/152/A
  Time limit per test:    1 seconds.
  Memory limit per test:  256 megabytes.
  Input:                  standart input.
  Output:                 standart output.

  Description:

  Vasya, or Mr. Vasily Petrov is a dean of a department in a local university.
  After the winter exams he got his hands on a group's gradebook.

  Overall the group has n students. They received marks for m subjects. Each
  student got a mark from 1 to 9 (inclusive) for each subject.

  Let's consider a student the best at some subject, if there is no student who
  got a higher mark for this subject. Let's consider a student successful, if
  there exists a subject he is the best at.

  Your task is to find the number of successful students in the group.

  Input:

  The first input line contains two integers n and m (1 ≤ n, m ≤ 100) — the
  number of students and the number of subjects, correspondingly. Next n lines
  each containing m characters describe the gradebook. Each character in the
  gradebook is a number from 1 to 9. Note that the marks in a rows are not
  sepatated by spaces.


  Output:

  Print the single number — the number of successful students in the given
  group.

*/
