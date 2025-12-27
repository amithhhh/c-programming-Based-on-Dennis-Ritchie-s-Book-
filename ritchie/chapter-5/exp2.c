#include <stdio.h>

void change(int**);

int main() {
	int x = 10;
	int *p = &x;
	change(&p);
	printf("%p\n",p);
	return 0;
}

void change(int **p) {
	*p = NULL;
}
