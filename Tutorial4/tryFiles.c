#ifndef __FILEUTILS_H
#define __FILEUTILS_H
#include <fileUtils.h>
#endif

int main(int argc, char **argv){
	if (argc != 2){
		printf("A file name is required to run this program\n");
		fprintf(stderr, "No file provided\n");

		exit(1);
	}

	FILE *fp;
	openFile(argv[1], &fp);
	int sum1, sum2 = 0;
	int a, b;
	
	while (!readLine(&a, &b, &fp)){
		fflush(stdout);
		sum1 += a;
		sum2 += b;
	}
	printf("%d, %d\n", sum1, sum2);
}
