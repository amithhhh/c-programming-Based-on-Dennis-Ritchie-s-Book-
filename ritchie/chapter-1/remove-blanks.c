#include <stdio.h>
#define MAXSIZE 2000

int my_getline(char line[], int lim);
void remove_blanks(char line[]);

int main() {
	int len;
	char line[MAXSIZE];

	while ((len = my_getline(line, MAXSIZE)) > 0) {
		printf("raw input: %s\n", line);
		remove_blanks(line);
	}
	return 0;
}

int my_getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void remove_blanks(char s[]) {
	int i,j;
	j = 0;
	char temp[MAXSIZE];
	for (i = 0; s[i] != '\0'; i++) {
		if ( s[i] != ' ' &&  s[i] != '\t') {
			temp[j] = s[i];
			j++;
		}
	}
	temp[i] = '\0';
	if (i > 0)
		printf("formatted input: %s", temp);
}
