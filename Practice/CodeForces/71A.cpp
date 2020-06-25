// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>

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
      // s += e.size() - 2;
      s += std::to_string(e.size() - 2);
      s.append(1, e[e.size() - 1]);
    } else {
      s = e;
    }
    std::cout << s << '\n';
  }

  return 0;
}
