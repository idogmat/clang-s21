#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pointer.h"

struct Person {
   char name[50];
   int age;
};

int main() {
    int size, start;
    pointer();
    send_pointer_func();
    struct Person* p = malloc(sizeof(struct Person));
    strcpy(p->name, "John"); // присваивание значения полю структуры
    p->age = 30; // присваивание значения другому полю структуры
    printf("%s\n", p->name);
    printf("%d\n", p->age);
    printf("Введите длинну массива: ");
    scanf("%d", &size);
    printf("Введите стартовую точку: ");
    scanf("%d", &start);
    int* arr =(int*) malloc(size * sizeof(int));
        for (int i = 0; i < size; i++, start++) {
            arr[i] = start;
        }
        for (int j = 0; j < size; j++) {
            printf("%d\t", arr[j]);
        }
        printf("\n");
        printf("%ld\n",sizeof(int));
        printf("%ld\n",sizeof(arr));
        free(arr);

    return 0;
}