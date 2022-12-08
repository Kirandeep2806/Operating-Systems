#include<stdio.h>
#include<unistd.h>

int main() {
    char *args[] = {"./main", NULL};
    execv(args[0], args); // execv
    return 0;
}
