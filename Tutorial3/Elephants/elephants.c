#include <stdio.h>
int main ( int argc, char **argv )
{
	int i;
	for (i=0; i<argc; i++) {
		if (1 == i) {
			printf("Parameter %d: %d\n", i, atoi(argv[1]));
			continue;
		}
		printf("Parameter %d: %s\n", i, argv[i]);
	}
}
