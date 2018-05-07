#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include <pthread.h>
#include <time.h>


int openSocket(unsigned short port) {
    int LISTENQ = 10;
    int s = socket(AF_INET, SOCK_STREAM, 0);

     // 消除端口占用错误
    const int option = 1;
    setsockopt(s, SOL_SOCKET, SO_REUSEADDR, (const void *)&option , sizeof(int));

    struct sockaddr_in servaddr;
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(port);

    bind(s, (struct sockaddr *)&servaddr, sizeof(servaddr));

    listen(s, LISTENQ);

    printf("listening at port %d\n", port);
    return s;
}


void response(int socketFile) {
    int s = socketFile;
    char *message = "connection default response\n";
    write(s , message , strlen(message));

}
void serverdemo(void) {

    unsigned short port = 3000;
    pid_t pid;
    int s = openSocket(port);

    struct sockaddr_in client;
    int size = sizeof(struct sockaddr_in);

    while(true) {
        int client = accept(s, (struct sockaddr *) &client, (socklen_t *)&size);
        pid = fork();
        if(pid == 0) {
            close(s);
            response(client);
            close(s);
            exit(0);
        }
        close(client);

        printf("accept and process\n");
    }
}
