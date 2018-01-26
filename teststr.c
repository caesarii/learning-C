#include <stdio.h>
#include "strlen.h"

void ptrDemo(void) {
    int *ptr;

    // 赋值
    int count = 10;
    ptr = &count;
    printf("指针的值是地址: %d \n", ptr);
    printf("等于指向的变量的地址: %d \n", &count);
    printf("\n");

    printf("指针指向变量的值: %d \n", *ptr);
    count = 25;
    printf("改变变量之后, 指针指向的变量的值也变了: %d \n", *ptr);


    *ptr = 35;
    printf("指针指向变量的值: %d \n", *ptr);
    printf("通过指针改变变量之后, 变量的值也变了: %d \n", count);


    char ch = 'a';
    char *cp = &ch;
    printf("*cp + 1 = %c \n", *cp + 1);

    printf("cp 表示的内存地址 %d \n", cp);
    printf("cp + 1 表示的内存地址 %d \n", cp + 1);

}

void testStrLen(void) {
    char * s = "abc";
    int len = strlen(s);
    printf("len %d \n", len);
}

void testFindChar(void) {
    char *str = "abcde";
    char *sub = 'f';
    int bool = findChar(str, sub);
    printf("bool %d \n", bool);
}

void testZeros(void) {
    int n = 10;
    int *arr = zeros(10);
    printf("%d \n", arr);
}

void testString(void) {
    char *string = "xyz";
    printf("string 指向 %c \n", *string);


    char *c = string + 1;
    printf("xyz + 1 = %d \n", c);
    printf("c 指向 %c \n", *c);

    char z = string[2];
    printf("string[2]: %c \n",  z);
}

int main(){
    // testStrLen();

    // testFindChar();

    // testZeros();

    testString();

    // ptrDemo();
    printf("Hello world!\n");
    return 0;
}

