#include <stdio.h>

int main() {
	int p = 10;
	int *pp = &p;
	int **ppp = &pp;
	
	printf("Value at p: %d\n", p);
	printf("Value at pp: %d\n", *pp);
	printf("Value at ppp: %d\n", **ppp);
	
	return 0;
}
