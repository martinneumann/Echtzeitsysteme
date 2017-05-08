#include "process.h"
#include "queue.h"
#include "processmodel.h"
#include <stdio.h>
#include <unistd.h>

int main() {
	int i = 0;
	process p1 = {1, RUNNING};
	process p2 = {2, READY};
	process p3=  {3, READY};
	process p4 = {4, READY};
	process p5 = {5, READY};
	process p6 = {6, READY};
	process p7 = {7, READY};
	process p8 = {8, READY};
	process p9 = {9, READY};
	process p10= {10, READY};

	queue *q = malloc(sizeof(queue));
	q->start = NULL;
	q->end = NULL;
	q_add(q, &p2);
	q_add(q, &p3);
	q_add(q, &p4);
	q_add(q, &p5);
	q_add(q, &p6);
	q_add(q, &p7);
	q_add(q, &p8);
	q_add(q, &p9);
	q_add(q, &p10);

	
	pctx context_pt;
	context_pt.qready = q;
	context_pt.running = &p1;
	
	while (1) {
	printf("=== NEW CYCLE ===\n");
	step(&context_pt);	
	print(&context_pt);
	i++;
	sleep(1);
	}
}
