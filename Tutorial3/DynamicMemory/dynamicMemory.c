#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc == 1) {
		printf("No array size provided\n");
		exit(1);
	}

	int *p;
	int size = atoi(argv[1]);
	p = (int *)malloc(size * sizeof(int));

	int i;
	for (i = 0; i < size; i++){
		*(p + i) = i + 1;
	}
	
	for (i = 0; i < size; i++){
		printf("%d\n", *(p + i));
	}
	free(p);
}
