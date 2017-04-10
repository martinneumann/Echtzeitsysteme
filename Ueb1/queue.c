#include <stdio.h>
#include "queue.h"

void q_add(queue *q, process *p) {
	/* adds process to queue */
	q_node *node = malloc(sizeof(q_node));
	node->p = p;
	node->next		= NULL;

	/* empty queue */
	if (q->start == NULL) {
		printf("Queue is empty, adding element.\n");
		q->start = node;
		q->start->next 		= NULL;
		q->end   		= node;
		q->end->next		= NULL;
	return;
	}

	/* non-empty queue */
	printf("Queue is not empty, adding element.\n");
	q->end->next = node;
	q->end = node;
		
}

process *q_remove(queue *q) {
	/* removes first element from queue */
	
	/* empty queue */
	if (q->start == NULL) {
		printf("Queue is empty!\n");
		return NULL;
	}

	/*non-empty queue */
	printf("Removing element.\n");
	if (q->start == q->end) {
                q_node *curr = q->start;
                q->start = NULL;
 	 	q->end = NULL;
		process *ret = curr->p;
 		free(curr);
		return ret;
	} else {
 		q_node *curr = q->start;
		q->start = q->start->next;
		process *ret = curr->p;
		free(curr);
		return ret;
	}
}			

void q_print(queue *q) {
	/* prints all processes in queue */
	if (q->start == NULL) {
	printf("Queue is empty, nothing to print.\n");
	return;
	}
	q_node *node = malloc(sizeof(q_node));
	node = q->start;
	printf("Printing Queue:\n");
	do {
		p_print(node->p);
		node = node->next;	
	}
	while (node!=NULL);
}
			
