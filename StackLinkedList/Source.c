///PROG7171985 Assignment 5
/// 
/// Gavin Abeele 
/// 
/// November 23, 2020
/// 
/// 1.0 Nov 2020: Inital
/// 
#include "Source.h"

int main(void) {
	char userInput[MAX_LENGTH] = "\0";	//Sets a char array to userinput with a max length of 100 and initlaize it to the end of line character

	printf("Enter in a string: ");
	scanf_s("%s", userInput, MAX_LENGTH);

	STACK stack = createStack();	//Creates a new stack 

	for (int i = 0; i < strlen(userInput); i++) {	//Loops through the string and pushes each character into the stack
		push(&stack, userInput[i]);
	}

	printf("\n------------Popping Stack------------\n");

	for (int i = 0; i < strlen(userInput); i++) {	//Loops through the length of string and pops each element in the stack
		printf("%c\n", pop(&stack));
	}

	return 0;
}

