#include <stdio.h>

#define string "AMITH"

int my_strlen(char *s);

int main() {
	printf("%b\n", string);
	printf("%d", my_strlen(string));
	return 0;
}

int my_strlen(char *s) {
	
	int i = 0;
	while (*(s + i) != '\0')
		i++;
	return i;
}
