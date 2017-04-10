#ifndef PROCESS_H
#define PROCESS_H

#include <stdint.h>
#include <stdlib.h>

typedef enum {READY, RUNNING} state;

typedef struct {
	uint32_t p_id;
	state p_state;
} process;

void p_switch_state(process *p);

void p_print(process *p);

#endif
