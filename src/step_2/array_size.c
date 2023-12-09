#include <stdio.h>

int array_size() {
   int arr[] = {1, 2, 3, 4, 5};
   int length = sizeof(arr) / sizeof(arr[0]);
   printf("Длина массива: %d\n", length);
   return 0;
}