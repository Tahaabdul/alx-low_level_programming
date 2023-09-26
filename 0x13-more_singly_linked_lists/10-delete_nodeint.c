#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given position in the list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
        unsigned int i;
        current = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
       	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}

