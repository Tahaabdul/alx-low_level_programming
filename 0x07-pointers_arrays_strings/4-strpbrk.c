#include "main.h"

/**
 * _strpbrk - finds first occurence of bytes from accept in string
 * @s: string to locate occurence of accept in
 * @accept: the array to use for search
 * Return: returns bytes found or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
