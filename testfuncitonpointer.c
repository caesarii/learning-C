
void
sayHello();

void
sayHello() {
    printf("hello, qing \n");
}


void
subtract(int x, int y);

void
subtract(int x, int y) {
    int z = x - y;
    printf("z: %d \n", z);
}

int add(int x, int y) {
    int z = x + y;

    return z;
}

int calculate(int (*operator)(int x, int y), int x, int y) {
    int z = operator(x, y);
    return z;
}


int
testfunctionpointer(void) {

    // 通过函数指针调用函数

    // 无返回值, 无参数
    void (*sayPtr)() = sayHello;
    (*sayPtr)();
    sayHello();

    // 有参数
    void (*subtractPtr)(int x, int y) = subtract;
    (*subtractPtr)(3, 2);

    // 有返回值
    int (*addPtr) (int x, int y) = add;
    int z = add(2, 3);
    printf("z: %d", z);


    // 函数指针作为参数
    int u = calculate(add, 5, 6);
     printf("u: %d", u);


    return 0;
}
