#include <stdio.h>

/**
 * main - prints all alphabets in lowercase alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string;

	for (string = 'a'; string <= 'z'; string++)
	{
		putchar(string);
	}
	putchar('\n');
	return (0);
}
