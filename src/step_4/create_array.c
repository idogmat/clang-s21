#include <stdio.h>
#include <stdlib.h>

int create_array(int cols, int rows) {
int i, j;
    // Выделение памяти под двумерный массив
    int **arr = (int**) malloc(rows * sizeof(int*));
    printf("%p-%s\n", arr, "current array pointer");
    for (i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(cols * sizeof(int));
        printf("%p-%s\n", arr[i], "current row pointer");
    }

    // Заполнение массива значениями
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr[i][j] = i + j + 1;
        }
    }

    // Вывод массива на экран
    printf("Двумерный массив:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Освобождение памяти
    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}