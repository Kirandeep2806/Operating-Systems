// Orphan Process

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main() {
    pid_t pid=fork();
    if(pid<0)
        perror("Fork Error!!\n");
    else if(pid>0) {
        printf("Parent Process\n");
    }
    else {
        sleep(2);
        printf("Child Process\n");
    }
    return 0;
}
