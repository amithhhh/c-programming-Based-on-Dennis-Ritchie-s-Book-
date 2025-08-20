#include <stdio.h>
#include <string.h>
#define MAXSIZE 1000

void reverse(char s[]);

int main() {
	int c, i;
	char line[MAXSIZE];
	i = 0;
	c = getchar();
	while (c != EOF && c != '\n') {
		line[i] = c;
		i++;
		c = getchar();
	}
	line[i] = '\0';
	printf("The raw string: %s\n", line);
	reverse(line);
	return 0;
}

void reverse(char s[]) {

	int i, j;
	char temp[MAXSIZE];
	i = strlen(s) - 1;
	j = 0;
	while (i >= 0) {
		temp[j] = s[i];
		j++;
		i--;
	}
	printf("The reversed String: %s\n", temp);
}
