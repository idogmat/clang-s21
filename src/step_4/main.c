#include <stdio.h>
#include "create_array.h"

int main() {
    int rows, cols;
    // Ввод размеров массива
    printf("Введите количество строк: ");
    scanf("%d", &rows);
    printf("Введите количество столбцов: ");
    scanf("%d", &cols);
    create_array(rows, cols);
    return 0;
}