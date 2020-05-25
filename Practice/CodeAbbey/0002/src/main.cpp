#include <cstdio>
#include <iostream>

int main(int argc, char **argv) {
  int num_elem = 0;
  scanf("%d", &num_elem);

  // printf("Num: %d", num_elem);

  int *vec = (int *)malloc(sizeof(int) * num_elem);
  int total = 0;
  for (int i = 0; i < num_elem; ++i) {
    scanf("%d", (vec + i));
  }

  for (int i = 0; i < num_elem; ++i) {
    total += vec[i];
  }

  printf("Total sum: %d\n", total);

  return 0;
}
