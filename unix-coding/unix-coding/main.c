#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int globvar = 6;
char buf[] = "a write to stdout\n";



int main()
{
    int var = 88;
    pid_t pid;
    if(write(STDOUT_FILENO, buf, sizeof(buf) -1) != sizeof(buf) -1) {
        print("write error");
    }

    printf("before fork \n");

    pid = fork();
    if(pid == 0) {
        globvar++;
        var++;
    } else {
        sleep(2);
    }

    printf("pid = %ld, glob = %d, var = %d \n", (long)getpid(), globvar, var);

    exit(0);


    printf("Hello world!\n");
    return 0;
}
