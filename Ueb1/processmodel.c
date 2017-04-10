#include "processmodel.h"

void step(pctx *ctx) {
	/* rotates processes around the queue */
	q_add(ctx->qready, ctx->running);
	p_switch_state(ctx->running->p_state); 
	ctx->running = q_remove(ctx->qready);
	p_switch_state(ctx->running->p_state); 

}

void print(pctx ctx*) {
		



}	
