#include <stack.h>

int main() {
	STACK *s = NULL;
	push(&s, 'Q');
	push(&s, 'C');
	push(&s, 'A');
	printStack(s);
	char c = pop(&s);	
	printf("%c\n", c);
	emptyStack(&s);

	return 0;
}
