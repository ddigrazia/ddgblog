// Programa desenvolvido por Dian Di Grazia
// Turma 14A - 2019/1 - UFLA

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main (void) {
	pid_t_child;
	int status;
	printf("I am the parent, my PID is d\n",getpid());
	printf("My parent's PID is %d\n",getppid());
	printf("I am going to create a new process... \n");
	child = fork();
	if (child == -1) {
		// fork() returns -1 on failure
		printf("fork() failed.");
		return (-1);
	}
	else if (child == 0) {
		//fork() returns 0 to the child process
		printf("I am the child, my pid is %d\n", getpid());
		printf("My parent's PID is %d\n",getppid());
	}
	else {
		//fork() retuns PID da criança paa o pai
		wait(&status);
		printf("I am parent, my PID is still %d\n",getpid();
	}
	return 0;
}
