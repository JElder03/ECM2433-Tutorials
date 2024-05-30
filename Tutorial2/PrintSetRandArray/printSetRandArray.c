#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(0);
	int i;
	int ns[11];
	for (i = 0; i <= 10; i++){
		ns[i] = rand() % 10;
	}
	
	for (i = 0; i <= 10; i++){
		printf("%2d: %d\n", i, ns[i]);
	}
}
