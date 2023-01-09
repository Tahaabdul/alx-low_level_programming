#include "main.h"

/**
 * *_memset- function fills the first n bytes of
 * the memory area pointed to by s with a byte b
 * @s: memory area to be filled
 * @b: char to fill memset with
 * @n: no of bytes to be filled with b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
