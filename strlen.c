
#include <stdlib.h>
#define true 1
#define false 0

size_t
strlen(char *string) {
    int length = 0;
    while(*string != '\0') {
        length += 1;
        *string ++;
    }
    return length;
}

int findChar(char *string, char value) {
    while(*string != '\0') {
        if(*string == value) {
            return true;
        }
        *string ++;

    }
    return false;
}

int * zeros(int n) {
    int array[n];
    int *addr;
    // 数组最后一个元素后面一个值的地址
    int limit = &array[n];
    for(addr = &array[0]; addr < limit; addr++) {
        *addr = 0;
    }
    return array;
}
