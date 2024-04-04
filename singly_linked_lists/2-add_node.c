#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the head of the list
 * @str: new string to be duplicated and stored in new node
 *
 * Return: Address of the new element, or NULL if failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
