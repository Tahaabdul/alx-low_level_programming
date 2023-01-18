#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: number of elements in the array
 * @cmp: pointer to the comparing function
 * 0 for a match -1 if no match or negative size
 * Return: returns the index of the first element
 * which cmp fxn return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	i = 0;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
