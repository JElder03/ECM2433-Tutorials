#include <stdio.h>

int main(void){
	int x = 4;
	printf("%d\n", x);
	printf("%p\n", &x);
	
	int *xPtr = &x;
	*xPtr = 6;
	printf("%d\n", *xPtr);
	printf("%p\n", &xPtr);
}
