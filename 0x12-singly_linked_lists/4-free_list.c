#include "lists.h"

/**
 * free_list - frees a list
 * @head: the head of the link list
 * return: nothing to retun
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
