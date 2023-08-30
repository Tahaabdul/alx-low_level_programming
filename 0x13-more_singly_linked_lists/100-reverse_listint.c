#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: Pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	 listint_t *prev;
	 listint_t *current;
	 listint_t *next;

	 prev = NULL;
	 current = *head;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
