#include <stdio.h>

int main() {
  int array[10];
  int i, reversed_array[10];

  for (i = 0; i < 10; i++) {
    array[i] = rand() % 100;
  }

  for (i = 0; i < 10; i++) {
    reversed_array[9 - i] = array[i];
  }

  printf("Original array: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  printf("Reversed array: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", reversed_array[i]);
  }
  printf("\n");

  return 0;
}
