#include <unistd.h>
#include <stdio.h>

int main() {
	printf("PID: %u\n", getpid());
	printf("PPID: %u\n", getppid());
return 0;
}	
