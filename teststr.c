#include <stdio.h>
#include "strlen.h"

void ptrDemo(void) {
    int *ptr;

    // ��ֵ
    int count = 10;
    ptr = &count;
    printf("ָ���ֵ�ǵ�ַ: %d \n", ptr);
    printf("����ָ��ı����ĵ�ַ: %d \n", &count);
    printf("\n");

    printf("ָ��ָ�������ֵ: %d \n", *ptr);
    count = 25;
    printf("�ı����֮��, ָ��ָ��ı�����ֵҲ����: %d \n", *ptr);


    *ptr = 35;
    printf("ָ��ָ�������ֵ: %d \n", *ptr);
    printf("ͨ��ָ��ı����֮��, ������ֵҲ����: %d \n", count);


    char ch = 'a';
    char *cp = &ch;
    printf("*cp + 1 = %c \n", *cp + 1);

    printf("cp ��ʾ���ڴ��ַ %d \n", cp);
    printf("cp + 1 ��ʾ���ڴ��ַ %d \n", cp + 1);

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
    printf("string ָ�� %c \n", *string);


    char *c = string + 1;
    printf("xyz + 1 = %d \n", c);
    printf("c ָ�� %c \n", *c);

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

