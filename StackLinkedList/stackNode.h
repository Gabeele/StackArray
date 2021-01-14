//Framework for stackNode (Linked list)
#pragma once

#include <stdlib.h>

typedef struct stackNode {
	char element;	
	struct PSTACKNODE* next;	//The next assdress of stack node will be assigned 

}STACKNODE, *PSTACKNODE;

PSTACKNODE createStackNode(char);

void disposeStackNode(PSTACKNODE);
