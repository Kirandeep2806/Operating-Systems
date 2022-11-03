#include<stdio.h>
#include<unistd.h>

int main() {
    char *args[] = {"./1", NULL};
    execv(args[0], args); // execv
    printf("Ending of 2.c!!");
    return 0;
}
