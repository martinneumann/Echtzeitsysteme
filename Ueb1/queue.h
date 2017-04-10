#ifndef QUEUE_H
#define QUEUE_H

#include "process.h"

typedef struct q_node q_node;

struct q_node {
	q_node *next;
	process *p;
};

typedef struct queue queue;

struct queue {
	q_node *start;
	q_node *end;
};

void q_add(queue *q, process *p);

process *q_remove(queue *q);

void q_print(queue *q);

#endif 	
