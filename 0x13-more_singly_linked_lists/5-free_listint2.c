#include "lists.h"

/**
* free_listint2 - a func that frees a listint_t list
* @head: pointer that points to the freed listint_t list
* tempnode - temporary node
* return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *tempnode;

	if (head == NULL)
		return;

	while (*head)
	{
		tempnode = (*head)->next;
		free(*head);
		*head = tempnode;
	}

	*head = NULL;
}
