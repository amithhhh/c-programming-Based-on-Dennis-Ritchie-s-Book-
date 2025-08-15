#include <stdio.h>

int main() {
	int c, i, nwhite, nothers;
	int ndigit[10];
	
	nwhite = nother = 0;

	while((c=getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c - '0']
		else if (c == '\n' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	printf("digits =");
	for (i = 0; i < 10; i++)
		printf(" %d", ndigit[i]);

	return 0;
}
