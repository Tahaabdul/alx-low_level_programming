#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns random number to n and
 * determine whether positive, negative or
 * zero
 *
 * Description: a function to detrmine variable is +ive -ive zero
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
