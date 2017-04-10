#include "process.h"
#include "queue.h"
#include "processmodel.h"

int main() {
	int i;
	process p2 = { 2, RUNNING };
	queue qready = {NULL, NULL};
	
	pctx context = {&qready,&p1};
	while (1) {
		step(&pctx);
		print(&pctx);
		sleep(5);
		printf("\n");
	}





	
	return 0;
}
