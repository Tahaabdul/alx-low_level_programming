#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate over items in an array
 * @array: array to traverse
 * @size:  size of the array
 * @action:a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
