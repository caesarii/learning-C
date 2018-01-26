

void
testCharPointer() {
    // 定义指针
    char c = 'Q';
    char *char_pointer;
    char_pointer = &c;

    // 指针变量值相同
    printf("%c %c\n", c, *char_pointer);

    // 改变变量，指针也变量
    c = '/';
    printf("%c %c\n", c, *char_pointer);


    // 通过指针改变变量
    *char_pointer = 'c';
    printf("%c %c\n", c, *char_pointer);

    // 改变指针
    char d = 'd';
    char_pointer = &d;
    c = 'e';

    // 指针指向
    printf("%c %c %c\n", c, *char_pointer, d);
}

