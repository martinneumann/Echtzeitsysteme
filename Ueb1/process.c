#include <stdio.h>
#include <stdint.h>
#include "process.h"

void p_switch_state(process *p) {
	/* switches between states */
	switch(p->p_state) {
		case READY: 	p->p_state = RUNNING; break;
		case RUNNING:  	p->p_state = READY; break;
		default: perror("Undefined state.\n"); break;
	}
}

void p_print(process *p) {
	/* prints process */
	printf("Process ID: %d,", p->p_id);
	if (p->p_state == 0) 	printf(" process state: READY.\n");
	else			printf(" process state: RUNNING.\n");
} 
