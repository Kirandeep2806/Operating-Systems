// Zombie Process

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main() {
    pid_t pid=fork();
    if(pid<0)
        perror("Fork Error!!\n");
    else if(pid>0) {
        sleep(3);
        printf("Parent Process\n");
    }
    else {
        printf("Child Process\n");
    }
    return 0;
}
