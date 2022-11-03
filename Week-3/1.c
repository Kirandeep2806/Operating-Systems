#include<stdio.h>
#include<fcntl.h>
#include<string.h> // strlen()
#include<unistd.h> // write()

int main() {
    // Creation
    int fd = open("name.txt", O_RDWR | O_CREAT);
    char str[100]="I am in the Kiran Lab\n";
    char getContent[100];
    if(fd == -1)
        perror("Unable to locate or create file!!");
    else {
        // Write Operation
        int sz = write(fd, str, strlen(str));
        // Read Operation
        int fd = open("read_content.txt", O_RDWR);
        read(fd, &getContent, 14);
        printf("Text in the file is %s\n", getContent);
        // lseek
        lseek(fd, 0, 20);
        char c1[20];
        read(fd, &c1, 20);
        printf("Text after lseek 10 characters: %s\n",c1);
        // close
        close(fd);
    }
    return 0;
}
