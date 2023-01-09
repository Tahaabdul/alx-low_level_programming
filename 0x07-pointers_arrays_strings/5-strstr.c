#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates an occurence of a substring needle in a string haystack
 * @haystack: string to find the substring in
 * @needle: the substring to search for in haystack
 *
 * Return: pointer to the beginning of the substring found or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

