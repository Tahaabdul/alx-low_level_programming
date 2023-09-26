#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}

