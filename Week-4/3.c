#include<stdio.h>
#include<unistd.h>

int main() {
    execl("/bin/ls", "ls", "-1", NULL);
    printf("Ending of 2.c!!");
    return 0;
}
