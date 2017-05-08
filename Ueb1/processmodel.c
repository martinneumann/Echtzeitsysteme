#include "processmodel.h"
#include <stdio.h>

void step(pctx *ctx) {
	/* rotates processes around the queue */

	// change state, add to queue
	p_switch_state(ctx->running); 
	q_add(ctx->qready, ctx->running);

	// get new process, change state
	ctx->running = q_remove(ctx->qready);
	p_switch_state(ctx->running); 

}

void print(pctx *ctx) {
	if (ctx != NULL) {
		//char queue[] = q_print(ctx->ready);
		//char process[] = p_print(ctx->running);
		printf("Elements in ready state queue:");
		q_print(ctx->qready);
			
		printf("\nCurrently running:");
		p_print(ctx->running);
		printf("\n");
	}
}


	
