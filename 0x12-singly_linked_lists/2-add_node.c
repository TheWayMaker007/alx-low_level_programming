#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
* @head: double pointer to the list_t list
* @str: new str to add in the node
* return: the address of the new elm, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
