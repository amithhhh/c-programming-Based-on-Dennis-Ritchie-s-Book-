#include <stdio.h>

void inline swap(int*, int*);

int main() {
	int a = 10, b = 20;
	printf("%d %d \n", a,b);
	swap(&a, &b);
	printf("%d %d \n", a,b);
	return 0;
}

void swap(int *px, int *py) {
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}
