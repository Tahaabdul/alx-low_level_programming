#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from src to a new destination
 * @src: origin of bytes to cpy from
 * @dest: destination to store copy of bytes in src
 * @n: amount of times src byte is duplicated
 * Return: value at destination;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
