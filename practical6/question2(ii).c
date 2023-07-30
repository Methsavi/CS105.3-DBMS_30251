#include <stdio.h>

int main() {
  int array_size, i;
  int array1[array_size], array2[array_size], vector_sum[array_size];

  printf("Enter the array size: ");
  scanf("%d", &array_size);

  for (i = 0; i < array_size; i++) {
    printf("Enter the value of array1[%d]: ", i);
    scanf("%d", &array1[i]);
  }

  for (i = 0; i < array_size; i++) {
    printf("Enter the value of array2[%d]: ", i);
    scanf("%d", &array2[i]);
  }

  for (i = 0; i < array_size; i++) {
    vector_sum[i] = array1[i] + array2[i];
  }

  printf("Vector sum: ");
  for (i = 0; i < array_size; i++) {
    printf("%d ", vector_sum[i]);
  }
  printf("\n");

  return 0;
}
