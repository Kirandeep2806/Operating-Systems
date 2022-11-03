#include<stdio.h>
#include<stdlib.h>

void acknowledge() {
    printf("Hello, I am the called function\n");
}

int main() {
    printf("I am the main function\n");
    printf("Main function's last line\n");
    atexit(acknowledge);
    // exit(0);
    // printf("I am KD");
    return 0;
}
