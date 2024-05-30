#include <stdio.h>

int main(){
	int i;
	int ns[11];
	for (i = 0; i <= 10; i++){
		ns[i] = i + 10;
	}
	
	for (i = 0; i <= 10; i++){
		printf("%2d: %d\n", i, ns[i]);
	}
}
