// https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
  unsigned long long n, m, a;
  cin >> n >> m >> a;

  unsigned long long flagstones_x = 0, flagstones_y = 0;

  flagstones_x += n / a;

  if ((n % a) > 0)
    ++flagstones_x;

  flagstones_y += m / a;

  if ((m % a) > 0)
    ++flagstones_y;

  std::cout << flagstones_x * flagstones_y;

  return 0;
}
