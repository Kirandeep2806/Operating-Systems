#include<stdio.h>
#include<stdlib.h> // For atexit()

void acknowledge() {
    printf("Hello, I am the called function\n");
}

int main() {
    printf("I am the main function\n");
    printf("Main function's last line\n");
    atexit(acknowledge);
    return 0;
}
