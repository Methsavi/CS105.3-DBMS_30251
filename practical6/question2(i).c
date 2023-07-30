#include <stdio.h>

int main() {
  int array_size, i, scalar_sum;

  printf("Enter the array size: ");
  scanf("%d", &array_size);

  int array1[array_size], array2[array_size];

  for (i = 0; i < array_size; i++) {
    printf("Enter the value of array1[%d]: ", i);
    scanf("%d", &array1[i]);
  }

  for (i = 0; i < array_size; i++) {
    printf("Enter the value of array2[%d]: ", i);
    scanf("%d", &array2[i]);
  }

  scalar_sum = 0;
  for (i = 0; i < array_size; i++) {
    scalar_sum += array1[i] + array2[i];
  }

  printf("Scalar sum: %d\n", scalar_sum);

  return 0;
}
