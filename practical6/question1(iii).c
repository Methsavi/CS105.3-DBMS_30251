#include <stdio.h>

int main() {
  int array[10];
  int i, sum_value, average_value;

  for (i = 0; i < 10; i++) {
    array[i] = rand() % 100;
  }

  sum_value = 0;
  for (i = 0; i < 10; i++) {
    sum_value += array[i];
  }

  average_value = sum_value / 10;

  printf("Average value: %.2f\n", average_value);

  return 0;
}
