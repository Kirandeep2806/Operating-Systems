// Aim : Waits for a child process to stop or end
#include<stdio.h>

// wait() starts
#include<sys/wait.h>
// wait() ends

// pid_t, fork() Usage start
#include<unistd.h>
#include<sys/types.h>
// pid_t, fork() Usage ends

int main() {
    pid_t pid = fork();
    if(pid>0) {
        wait(NULL);
        printf("Hello!! I am parent - %d!\n", getpid());
    }
    else if(pid==0) {
        printf("Hello!! I am child - %d, My parent is %d!\n", getpid(), getppid());
    }
    else {
        fprintf(stderr, "Fork Failed!!");
        return 1;
    }
    return 0;
}
