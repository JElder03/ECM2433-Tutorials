#ifndef __FILEUTILS_H
#define __FILEUTILS_H
#include <fileUtils.h>
#endif

void openFile(char *fileName, FILE **fp){
	if( (*fp = fopen(fileName, "r")) == NULL){
		printf("The file you have provided does not exist\n");
		fprintf(stderr, "error %d: %s\n", errno, strerror(errno));
		exit(1);
	}
}

int readLine(int *a, int *b, FILE **fp){
	if (fscanf(*fp, "%d,%d", a, b) == 2) {
		return 0;
	}
	else if (!feof(*fp)){	
		printf("The file you have provided is formatted incorrectly\n");
		fprintf(stderr, "Incorrect file format\n");
		close(*fp);
		exit(1);
	} else {
		close(*fp);
		return(1);
	}
}
