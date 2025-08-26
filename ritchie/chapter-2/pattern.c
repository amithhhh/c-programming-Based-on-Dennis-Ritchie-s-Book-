#include <stdio.h>

#define pattern "lo"
#define MAXLINE 1000

int getPattern(char s[]);

int main() {
	int c;
	int i = 0;
	char line[MAXLINE];
	printf("Enter the string\n");
	while ((c = getchar()) != EOF) {
		line[i] = c;
		i++;
	}
	line[i] = '\0';

	if (getPattern(line) == 1)
		printf("\nFound the Pattern");
	else
		printf("\nPattern does not exist");

	return 0;

}

int getPattern(char s[]) {
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; pattern[k] != '\0' && pattern[k] == s[j]; j++, k++)
			;
	}
	if (k > 0 && pattern[k] == '\0')
		return 1;
	return -1;
}
