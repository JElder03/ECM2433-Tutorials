#ifndef __STACK_H
#define __STACK_H

#include <stdio.h>
#include <stdlib.h>

struct stackStruct {
	char   data;
	struct stackStruct *next;
};

typedef struct stackStruct STACK;

static STACK *newNode(char);
extern void push(STACK**, char);
extern char pop(STACK**);
extern void printStack(STACK*);
extern void emptyStack(STACK**);

#endif
