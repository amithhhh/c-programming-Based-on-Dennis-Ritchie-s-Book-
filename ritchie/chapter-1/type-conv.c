#include <stdio.h>
#define LINE "0123456789"
#define HEXVALUE "0x1A"

int my_atoi(char s[]);
int my_lower(int);
int my_htoi(char s[]);

int main() {
	int a, b, c;
	a = my_atoi(LINE);
	b = my_lower('Z');
	c = my_htoi(HEXVALUE);
	printf("%d %d %d", a, b, c);
	return 0;
}

int my_atoi(char s[]) {
	int i, n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

int my_lower(int c) {
	if (c >= 'A' && c <= 'Z')
		return c + 'a' -'A';
	else
		return c;
}

int my_htoi(char s[]) {
	int i = 2, result = 0;
	while (s[i] != '\0') {
		int digit = 0;
		if (s[i] >= '0' && s[i] <= '9')
			digit = s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			digit = s[i] - 'a' + 10;
		
		result = result * 16 +digit;
		i++;
	}
	return result;
}
