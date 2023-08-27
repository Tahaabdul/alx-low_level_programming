#include <stdio.h>
#include <stdlib.h>

/**
 * is_prime_number - check if a given integer is a prime number.
 * @n: The integer to be checked if a  prime number .
 * Return:  1 if the input integer is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
