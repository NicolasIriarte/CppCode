// https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
  int w;

  cin >> w;

  if (w == 2) {
    cout << "NO";
  } else {

    if (w % 2 == 0)
      cout << "YES";
    else
      cout << "NO";
  }
  return 0;
}
