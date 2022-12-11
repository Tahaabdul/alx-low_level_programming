#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabet sequence and repeat same in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string;

	for (string = 'a'; string != 'z'; string++)
		putchar(string);
	for (string = 'A'; string != 'Z'; string++)
		putchar(string);
	putchar('\n');

	return (0);
}
