#include <stdio.h>
#include "main.h"

/*
 * print_diagsums - prints the sum of the diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum0 = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum0 += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
