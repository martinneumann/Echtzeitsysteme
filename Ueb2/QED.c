#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>


#define CHILD 0
#define FAILURE -1

int main() {
	int i=0;

	for(i=0; i<1; i++) {

		switch( fork() ) {

			case FAILURE:
				perror("Fork failed.\n");
				break;

			case CHILD:
				printf("Child - PID: %u, PPID: %u\n\n", getpid(), getppid());
				fflush(stdout);
				break;

			default:
				printf("Parent - PID: %u, PPID: %u\n\n", getpid(), getppid());
				fflush(stdout);
				printf("Child: -PID: %u, PPID: %u\n\n", getpid(), getppid());
				sleep(1);	
				exit(0);
				
				break;
		}
	}



	return 0;
}	
