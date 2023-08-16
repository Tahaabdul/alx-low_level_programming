#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - applys a function on all elements in an array
 * @array: the array to apply function on
 * @size: size of the array
 * @action: pointer to function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL &&  action != NULL && size >0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	
}
