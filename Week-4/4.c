#include<stdio.h>
#include<unistd.h>

int main() {
    int ret;
    char *args[] = {"HOME=/usr/home","LOGNAME=home", NULL};
    ret=execle("/bin/ls", "ls", "-la", NULL, args);
    printf("Ending of 2.c!!");
    return 0;
}
