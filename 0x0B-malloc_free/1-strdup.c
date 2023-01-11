#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string
 * @str: string to copy
 * Return: Pointer to string
 */

char *_strdup(char *str)
{
	int l, i;
	char *s;

	if (str == NULL)
		return (0);
	l = 0;
	while (*(str + l))
		l++;
	s = malloc(sizeof(char) * l + 1);
	if (s == 0)
		return (0);
	for (i = 0; i <= l; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
