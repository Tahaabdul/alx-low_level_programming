#include <stdio.h>
#include <stdlib.h>

/**
 * is_divisible - Check if an integer is divisible by any integer
 * from a given divisor up to the integer itself
 * @n: The integer to be checked for divisibility.
 * @divisor: The divisor to start checking from.
 * Return: 1 if the integer is divisible by any integer from
 * 'divisor' to itself, 0 otherwise.
 */


int is_divisible(int n, int divisor)
{
	if (divisor >= n)
	{
		return (0);
	}

	if (n % divisor == 0)
	{
		return (1);
	}

	return (is_divisible(n, divisor + 1));
}


/**
 * is_prime_number - check if a given integer is a prime number.
 * @n: The integer to be checked if a  prime number .
 * Return:  1 if the input integer is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)

	{
		return (0);
	}

	return (!is_divisible(n, 2));
}
