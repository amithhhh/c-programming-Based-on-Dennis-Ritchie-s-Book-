#include <limits.h>
#include <stdio.h>
#include <float.h>
#define NEWLINE '\n'

int main(void) {
	printf("Size of char: %d\n", CHAR_BIT);
	printf("Minimum positive value for float: %f\n", FLT_MIN);
	printf("Integer representation of newline: %d\n", NEWLINE);
	return 0;
}
