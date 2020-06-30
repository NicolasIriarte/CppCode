// -*- compile-command: "g++ -Wall 102397G.cpp -o a && cat in.txt | ./a; rm a" -*-

/*
 * Author: Nicolás Iriarte.
 * E-Mail: NicolasIriarte95@gmail.com
 * Telegram: @NicolasIriarte
 * Creation date: 06/27/20 3:46 PM
 * URL: https://codeforces.com/gym/102397/G
 * Speed:
 */

#include <bits/stdc++.h>

typedef unsigned long long ull;

#define SORT(x) (sort(x.begin(), x.end()))

using namespace std;

int main(int argc, char **argv) {
  int n, k;
  int tmp = 0;
  int a, b;
  scanf("%d %d", &n, &k);
  a = b = n;

  int *v1 = (int *)malloc(sizeof(int) * n);
  int *v2 = (int *)malloc(sizeof(int) * n);

  static int arr1[100000];
  static int arr2[100000];

  int max = 0;
  int max_1 = 0;

  for (int i = 0; i < n; ++i) {
    scanf("%d", &tmp);
    if (tmp > max) {
      max_1 = max;
      max = tmp;
    }

    if (tmp < k) {
      *(v1 + (i - (n - a))) = tmp;
      ++arr1[tmp];
    } else
      --a;
  }

  for (int i = 0; i < n; ++i) {
    scanf("%d", &tmp);
    if (tmp > max) {
      max_1 = max;
      max = tmp;
    }

    if (tmp < k) {
      *(v2 + (i - (n - b))) = tmp;
      ++arr2[tmp];
    } else
      --b;
  }
  int tot = 0;

  for (int i = 0; i < max_1 - 1; ++i) {
    for (int j = i + 1; j < max; ++j) {
      if (i + j == k) {
        tot += *(arr1 + i) * *(arr1 + j);
        tot -= *(arr2 + i) * *(arr2 + j);
      }
      if (i + j > k)
        break;
    }
  }

  if (tot < 0)
    printf("BASHAR");
  else if (tot > 0)
    printf("MAHMOUD");
  else
    printf("DRAW");

  return 0;
}
