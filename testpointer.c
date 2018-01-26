#include <stdio.h>
#include <stdlib.h>

void
testPointer() {
    int count = 10;
    int x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count = %i, x = %i \n", count, x);


}


