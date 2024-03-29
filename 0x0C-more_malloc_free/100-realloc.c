#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  Reallocates a memory block
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 * Return: Pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	 void *new_ptr;
	 unsigned int min_size;


	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	min_size = (old_size < new_size) ? old_size : new_size;
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}

