// Orphan Process

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main() {
    pid_t pid=fork();
    if(pid<0)
        perror("Fork Error!!\n");
    else if(pid>0) {
        printf("Parent Process %d\n", getpid());
    }
    else {
        sleep(5);
        printf("Child Process %d\n", getpid());
    }
    return 0;
}
