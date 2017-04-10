#include "process.h"
#include "queue.h"


int main() {
	process p1 = { 1, READY };
	process p2 = { 2, RUNNING };
	
	queue q = { NULL, NULL };
	q_add(&q, &p1);
	q_add(&q, &p2);
	q_print(&q);
	q_remove(&q);
	q_print(&q);

	
	return 0;
}
