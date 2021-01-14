#include "stackNode.h"

PSTACKNODE createStackNode(char element) {

	PSTACKNODE node = (PSTACKNODE)malloc(sizeof(STACKNODE));

	if (!node) {	//Run is unable to allocate memory
		printf("There is an issue allocating memeory.");
		exit(0);
	}

	node->element = element;

	node->next = NULL;	//Set the inital next to null

	return node;

}

PSTACKNODE getNextNode(PSTACKNODE node) {	//Returns the next node from a node
	return node->next;

}

void disposeStackNode(PSTACKNODE node) {	//Frees the memory address of the node
	free(node);

}

