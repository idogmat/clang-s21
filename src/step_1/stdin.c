#include <stdio.h>
int calc(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("Аргумент %d: %s\n", i, argv[i]);
    }
    printf("\n");
    return 0;
}