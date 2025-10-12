#include <stdio.h>

void greet() {
	printf("Hello from greet()!\n");
}


void execute(void (*func)()) {
	func();
}


int main() {
	execute(greet);
	printf("%p", greet);
	return 0;
}
