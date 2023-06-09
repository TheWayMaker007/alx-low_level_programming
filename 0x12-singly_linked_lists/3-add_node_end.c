#include "lists.h"

/**
* add_node_end - adds a new node at the end of the linked list
* @head: head of the linked list
* @str: strg to add the new node
* return: address to new elm, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t n;
/*	int length = 0;*/
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

/*	while (str[length])*/
/*                length++;*/

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = len;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
