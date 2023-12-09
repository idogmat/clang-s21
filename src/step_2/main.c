#include <stdio.h>
#include "string_size.h"
#include "array_size.h"

int main() {
    char string[50] = "\ntest-test\n";
    printf("%s", string);
    array_size();
    size(string);
    return 0;
}