#include <stdio.h>

#define READ (1 << 0)
#define WRITE (1 << 1)
#define EXEC (1 << 2)

int main(void) {
	unsigned char permissions = 0;
	permissions = permissions | (READ | WRITE);

	if (permissions & WRITE)
		printf("Write Allowed\n");

	permissions = permissions & ~WRITE;
	
	permissions = permissions ^ EXEC;

	printf("Final Permissions: %b\n", permissions);
	return 0;
}
