#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -allocates memory for an array of nmemb elements
 *of size bytes each and returns a pointer
 *@nmemb: Number of the array elements.
 *@size: size ofelements in array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

