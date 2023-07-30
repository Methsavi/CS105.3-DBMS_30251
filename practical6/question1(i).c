#include <stdio.h>

int main() {
  int array[10];
  int i, min_value;

  for (i = 0; i < 10; i++) {
    array[i] = rand() % 100;
  }

  min_value = array[0];
  for (i = 1; i < 10; i++) {
    if (array[i] < min_value) {
      min_value = array[i];
    }
  }

  printf("Minimum value: %d\n", min_value);

  return 0;
}
