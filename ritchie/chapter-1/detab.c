#include <stdio.h>

#define MAXLINE 1000
#define N 8

int my_getline(char s[]);

int main() {
	int c, len, i, l, space_needed;
	char line[MAXLINE];
	char copy[MAXLINE];
	len = 0;

	while ((len = my_getline(line)) > 0) {
		int j = 0;
		int k = 0;
		for (i = 0; line[i] != '\0'; i++) {
			if (line[i] == '\t') {
				space_needed = N - (j % N);
				for (l = 0; l < space_needed; l++) {
					copy[k] = ' ';
					k++;
					j++;
				}
			} else {
				copy[k] = line[i];
				k++;
				j++;
			}
		}
		copy[k++] = '\0';
	        printf("\n Formatted code: %s", copy);
		
	}
	return 0;
}

int my_getline(char s[]) {
	int i, c;

	for (i = 0; i < MAXLINE -1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}
