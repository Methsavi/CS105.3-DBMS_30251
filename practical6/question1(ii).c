#include <stdio.h>

int main() {
  int array[10];
  int i, max_value;

  for (i = 0; i < 10; i++) {
    array[i] = rand() % 100;
  }

  max_value = array[0];
  for (i = 1; i < 10; i++) {
    if (array[i] > max_value) {
      max_value = array[i];
    }
  }

  printf("Maximum value: %d\n", max_value);

  return 0;
}
