#include "lists.h"

/**
* get_nodeint_at_index - funct returning the nth node of listint_t linked list
* tempnode - temporary node
* @e: an unsigned int variable
* @head: 1st node in linked-list
* @index: index of the node to return
* Return: pointer that points to the nth node,otherwise NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int e = 0;
	listint_t *tempnode = head;

	while (tempnode && e < index)
	{
		tempnode = tempnode->next;
		e++;
	}

	return (tempnode ? tempnode : NULL);
}
