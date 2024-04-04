#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: the address of the new element, of NULL if failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	size_t len = 0;

	/*Calculate length of string*/
	while (str[len] != '\0')
		len++;

	/*Allocates memory and checks if malloc failed*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*Duplicates the string and chekcs if strdup failed*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len; /*Stores the length of the new str in the new node*/

	new_node->next = NULL; /*Sets the next pointer of the new node to NULL*/

	if (*head == NULL) /*If list is empty, make the new node, the head*/
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head; /*Else, traverse the list to find the last node*/
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node; /*Append or add the new node after the last node*/

	return (new_node);
}
