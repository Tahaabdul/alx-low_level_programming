#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Removes and returns data from
 * the head node of a listint_t list.
 * @head: Pointer to pointer to the head node.
 *
 * Return: Data from the former head node, or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *temp = *head;

	if (head == NULL || *head == NULL)
		return (0);

	*head = (*head)->next;
	free(temp);

	return (data);
}
