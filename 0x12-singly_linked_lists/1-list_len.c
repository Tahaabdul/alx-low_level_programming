#include <stdio.h>
#include "lists.h"

/**
 * list_len - Calculate the total count of nodes in a linked list.
 * This function calculates the total count of nodes in a given linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Total count of nodes in the linked list.
 */


size_t list_len(const list_t *h)
{
	size_t total_count = 0;

	while (h != NULL)
	{
		total_count++;
		h = h->next;
	}
	return (total_count);
}
