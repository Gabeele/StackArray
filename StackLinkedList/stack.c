#include "stack.h"

STACK createStack() {

	STACK newStack = { NULL };

	return newStack;
}

void push(PSTACK stack, char element) {		//Pushes an element into the stack

	PSTACKNODE newNode = createStackNode(element);	//Creates a new stack node 

	if (stack->stackHead == NULL) {	//If the stack head is null, set the stack head to the new node
		stack->stackHead = newNode;
	
	}
	else {	
		newNode->next= stack->stackHead;	//Sets the next node to the stack head
		stack->stackHead = newNode;		//Sets the stack head to the new node

	}

}

char pop(PSTACK stack) {	//Pops and element at the top of the stack

	char topChar = stack->stackHead->element;	//Temporary char value for the stack head

	PSTACKNODE stackHead = stack->stackHead;	//Get the pointer address of stack head

	stack->stackHead = stack->stackHead->next;	//Set the head to stack head's next node

	disposeStackNode(stackHead);	//Dispose the stackhead value

	return topChar;	//return the tempoary value
}





