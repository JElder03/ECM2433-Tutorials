#include <stdio.h>

void updateInteger(int *);

int main(void) {
	int x = 42;

	printf("in main function x = %d\n",x);
	updateInteger(&x);
	printf("in main function x = %d\n",x);
}

void updateInteger(int *x){
	*x += 3;
	printf("in the updateInteger function x = %d\n", *x);
}
