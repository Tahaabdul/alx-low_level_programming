#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @char: the character to fill array with
 * Return: The array field
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
