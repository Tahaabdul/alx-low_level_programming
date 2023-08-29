#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Counts the number of elements in a list listint_t.
 * @h: Pointer to the head of the linked list.
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
