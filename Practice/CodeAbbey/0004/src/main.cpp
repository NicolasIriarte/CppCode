#include <cstdio>
#include <iostream>

int main(int argc, char **argv) {
  int num_elem = 0;
  scanf("%d", &num_elem);

  int *vec = (int *)malloc(sizeof(int) * num_elem * 2); // cause they are pairs
  for (int i = 0; i < num_elem * 2; ++i) {
    scanf("%d", (vec + i));
  }

  int results[num_elem];
  for (int i = 0; i < num_elem * 2; i += 2) {
    printf("Sum: %d + %d\n", vec[i], vec[i + 1]);
    results[i / 2] = std::min(vec[i], vec[i + 1]);
  }

  for (auto n : results) {
    printf("%d ", n);
  }
  printf("\n");

  return 0;
}
