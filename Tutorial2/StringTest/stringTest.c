#include <stdio.h>
#include <string.h>

int main()
	{
	char test[9];
	strcpy(test, "elephants");
	printf("%s\n", test);

	int tester(char x[])
        {
                return(!strcmp(test, x));
        }
        printf("%d\n", tester("elephants"));
        printf("%d\n", tester("elephantd"));
}
