#include "lists.h"

/**
* listint_len - Func to returns num of elms in linked-lists
* nnode - num of nodes in linked-list (is incremented)
* @h: pointer that points to linked-list
* Return: num of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t nnode = 0;

	while (h)
	{
		nnode++;
		h = h->next;
	}

	return (nnode);
}
