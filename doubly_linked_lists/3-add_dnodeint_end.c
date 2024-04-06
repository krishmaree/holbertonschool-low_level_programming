#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t
 * @head: pointer to the head of the list
 * @n: value to be store in new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* sets value of the new node */

	new_node->next = NULL;

	if (*head ==  NULL) /* if list is empty, make the new node the head */
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	last_node = *head; /* otherwise, traverse the list to find the last node */
		while (last_node->next != NULL)
			last_node = last_node->next;

	last_node->next = new_node;

	new_node->prev = last_node;

	return (new_node);
}
