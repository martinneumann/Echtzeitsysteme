#include "processmodel.h"

void step(pctx *ctx) {
	/* rotates processes around the queue */

	// change state, add to queue
	p_switch_state(ctx->running->p_state); 
	q_add(ctx->qready, ctx->running);

	// get new process, change state
	ctx->running = q_remove(ctx->qready);
	p_switch_state(ctx->running->p_state); 

}

void print(pctx ctx*) {
		



}	
