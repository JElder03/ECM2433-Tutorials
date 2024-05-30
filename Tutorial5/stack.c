#include <stack.h>

/* Creates a new node with char data to be added to the stack. The node is node connected to any other stack and has no next node  */
static STACK *newNode(char data){
	STACK *newNode;
	if( (newNode = (STACK *)malloc(sizeof(STACK)) ) == NULL){
		printf("Insufficent memory\n");
		fprintf(stderr,"Memory allocation error in line %d of program %s\n",__LINE__,__FILE__);
		exit(-1);
	}

	newNode->data = data;
	newNode->next = NULL;

	return newNode;
}

/* adds a node with char data to the top of a stack */
extern void push(STACK **s, char data){
	STACK *top = newNode(data);
	top->next = *s;
	*s = top;
}

/* removes the top node on the stack, returns its contents, and frees its memory. Sets the stack pointer to the new top node */
extern char pop(STACK **s){
	char data = '\0';
	STACK *top = *s;

	if ( top==NULL ) {
		printf("Warning: attempting to pop from an empty stack.\n");
		fprintf(stderr,"Warning:  attempting to pop from an empty stack in line %d of program %s\n",__LINE__,__FILE__);
		return data;
	}

	data = top->data;
	*s = top->next;
	free(top);
	return(data);
}

/* prints the char data of every node in the stack in order on one line */
extern void printStack(STACK *s){
	STACK *current = s;
	do {
		printf("%c",current->data);
		current = current->next;
	}
	while (current != NULL);
	printf("\n");
}

/* empties an entire stack and replaces its pointer with null */
extern void emptyStack(STACK **s){
	do {
		pop(s);
	} while (*s != NULL);
	return;
}
