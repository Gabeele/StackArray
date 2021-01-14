//Framework for the stack

#pragma once
#include <stdlib.h>

#include "stackNode.h"

typedef struct stack {
	PSTACKNODE stackHead;	

} STACK, *PSTACK;

STACK createStack();

void push(PSTACK, char);

char pop(PSTACK);

