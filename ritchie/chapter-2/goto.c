#include <stdio.h>

int main () {

	int i = 1;

	if (i)
		goto statements;
	
	statements:
		printf("Hello World");
	return 0;

}
