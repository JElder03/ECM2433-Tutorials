#include <stdio.h>

int printInteger(int);

int main(void) {
	int x = 42;
	int y = 0;

	printf("in main function x = %d, y = %d\n",x,y);
	y = printInteger(x);
	printf("in main function x = %d, y = %d\n",x,y);
}

int printInteger(int x){
	printf("in the printInteger function x = %d, y = %d\n", x, x+3);
	return x + 3;
}
