
void
testPrintf() {
    printf("Hello Qinghe!\n");
    printf("Hello world!\n");

    int sum;
    sum = 50 + 25;
    printf("the sum is %i\n", sum);

    // for
    int n, triangular;
    triangular = 0;
    for(n = 1; n <= 200; n = n + 1) {
        triangular = triangular + n;
    }
    printf("triangle %i\n", triangular);
}


