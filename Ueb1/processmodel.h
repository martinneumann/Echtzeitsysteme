#ifndef PROCESSMODEL_H
#define PROCESSMODEL_H


#include "queue.h"
#include "process.h"

typedef struct pctx pctx;

stuct pctx {
	queue *qready;
	process *running;
}

void print(pctx *ctx);

void step(pctx *ctx);





#endif
