#include <stdio.h>


void my_strcpy(char *s, char *t);
void my_strcat(char *s, char *t);

int main() {
	char *t = "", *string1="Hello World", *string2="Hello sun";
	my_strcpy(string1, t);
	printf("%s", t);
	my_strcat(string1, string2);
	printf("%s", string1);
	return 0;
}

void my_strcpy(char *s, char *t) {
	while ((*t++ = *s++) != '\0')
		;
}

void my_strcat(char *s, char *t) {
	
	while (*s != '\0')
		s++;

	while (*t != '\0') {
		*s = *t;
		s++;
		t++;
	}
}
