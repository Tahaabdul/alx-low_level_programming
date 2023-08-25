#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added as the new node's content.
 * Return: Address of the new element, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;

	if (str == NULL)
		return (NULL);
	new_element = (list_t *)malloc(sizeof(list_t));

	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	if (new_element->str == NULL)
	{
		free(new_element);
		return (NULL);
	}
	new_element->len = strlen(str);
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_element;
	}    return (new_element);
}
