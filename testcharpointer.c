

void
testCharPointer() {
    // ����ָ��
    char c = 'Q';
    char *char_pointer;
    char_pointer = &c;

    // ָ�����ֵ��ͬ
    printf("%c %c\n", c, *char_pointer);

    // �ı������ָ��Ҳ����
    c = '/';
    printf("%c %c\n", c, *char_pointer);


    // ͨ��ָ��ı����
    *char_pointer = 'c';
    printf("%c %c\n", c, *char_pointer);

    // �ı�ָ��
    char d = 'd';
    char_pointer = &d;
    c = 'e';

    // ָ��ָ��
    printf("%c %c %c\n", c, *char_pointer, d);
}

