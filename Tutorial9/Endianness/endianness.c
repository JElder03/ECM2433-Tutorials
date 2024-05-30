#include <endianness.h>

union mybytes {
	unsigned long int n;
	unsigned char bytes[8];
};

void printBytesPointer(unsigned long int n){
	int i;
	
	printf("%d =", n);
	
	for (i=0; i < sizeof(n); i++)
		printf(" %02x", *(( (char *) &n ) + i) );
	printf("\n");
}

void printBytesUnion(unsigned long int n) {
	union mybytes b;
	int i;

	b.n = n;
	printf("%d =", n);
	for (i=0; i < sizeof(b.bytes); i++)
		printf(" %02x", b.bytes[i]);
	printf("\n");
}

int main(void){
	unsigned long int n1 = 15;
	unsigned long int n2 = 1024;
	printBytesPointer(n1);
	printBytesUnion(n1);
	printBytesPointer(n2);
	printBytesUnion(n2);

	return 0;
}
