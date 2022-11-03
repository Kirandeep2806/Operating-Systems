#include<stdio.h>
#include<unistd.h>

int main() {
    execlp("ls", "ls", "-la", NULL);
    printf("Ending of 2.c!!");
    return 0;
}
