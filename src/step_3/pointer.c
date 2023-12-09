#include <stdio.h>

int pointer() {
    int num = 10;
    int *ptr;

    // Присваиваем указателю адрес переменной num
    ptr = &num;
    
    printf("Значение переменной num: %d\n", num);
    printf("Адрес переменной num: %p\n", &num);
    printf("Значение, на которое указывает указатель ptr: %d\n", *ptr);
    printf("Адрес, на который указывает указатель ptr: %p\n", ptr);

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int send_pointer_func() {
    int (*ptr)(int, int);

    ptr = &sum; // Присваиваем указателю адрес функции sum

    int result = ptr(5, 3); // Вызываем функцию через указатель

    printf("Результат: %d\n", result);

    return 0;
}