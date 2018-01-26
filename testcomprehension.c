#include <stdio.h>
#include <stdlib.h>

void
testComprehension() {
    int var = 10;
    int *pointer = &var;

    // int *pointer;
    // pointer = &var;

    // ´íÎó
    // int *pointer;
    // *pointer = &var;

    *pointer = 11;

    int n = 12;
    pointer = &n;

    printf("%i %i %i\n", var, *pointer, pointer);
}
