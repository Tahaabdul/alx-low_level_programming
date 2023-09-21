#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added as the new node's content.
 *
 * Return: Address of the new element, or NULL if it fails.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_length = 0;

	while (str[str_length] != '\0')
		str_length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = str_length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

