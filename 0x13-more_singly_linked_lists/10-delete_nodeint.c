#include "lists.h"

/**
* delete_nodeint_at_index - funct which deletes node at index index of
* a listint_t linked list
* tempnode - pointer to temporary node
* curtnode - pointer to current node
* @e: unsigned int varaible
* @head: pointer to 1st elm in linked-list
* @index: index of the node which is to be deleted
* Return: 1 Success, otherwise -1 for NULL
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int e = 0;
	listint_t *tempnode = *head;
	listint_t *curtnode = NULL; /* current node */

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempnode);
		return (1);
	}
	while (e < index - 1)
	{
		if (!tempnode || !(tempnode->next))
			return (-1);
		tempnode = tempnode->next;
		e++;
	}
	curtnode = tempnode->next;
	tempnode->next = curtnode->next;
	free(curtnode);

	return (1);
}
