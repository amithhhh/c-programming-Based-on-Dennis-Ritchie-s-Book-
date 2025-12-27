#include <stdio.h>
#include <stdlib.h>

int main() {
	int **matrix;
	int row = 3, col = 4;
	matrix = malloc(sizeof(int*));
	for (int i = 0; i < row; i++) {
		*(matrix + i) = malloc(col * sizeof(int));
	}
	matrix[0][1] = 4;
	printf("%d\n", matrix[0][1]);
	return 0;
}
