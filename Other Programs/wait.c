#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main() {
	pid_t pid;
	pid=fork();
	if(pid==0) {
		printf("I am Start of Child!!\n");
		printf("I am End of Child!!\n");
	}
	else if(pid>0) {
		printf("I am Start of Parent\n");
		wait(NULL);
		printf("I am End of Parent!!\n");
	}
	else {
		printf("Fork Error");
	}
	return 0;
}
