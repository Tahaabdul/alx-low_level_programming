#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns index of searched integer
 * @array: pointer array to go through
 * @size: size of array
 * @cmp: function to compare values
 * Return: index of number or -1 if no match or error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
