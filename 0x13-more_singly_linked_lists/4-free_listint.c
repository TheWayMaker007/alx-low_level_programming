#include "lists.h"

/**
* free_listint - a function that frees a listint_t list
* tempnode - the temporary node
* @head: listint_t list to be freed
* Returns: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *tempnode;

	while (head)
	{
		tempnode = head->next;
		free(head);
		head = tempnode;
	}
}
