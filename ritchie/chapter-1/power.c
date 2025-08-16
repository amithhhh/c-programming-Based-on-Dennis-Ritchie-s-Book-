#include <stdio.h>

int power(int m, int n) {
	int i, result;
	result = 1;
	for (i = 0; i < n; i++)
		result = result * m;
	return result;
}

int main() {
	printf("%d", power(2, 7));
	return 0;
}
