#include "lists.h"

/**
 * free_list - frees a list
 * @head: a list that enters to the func
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)

	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
