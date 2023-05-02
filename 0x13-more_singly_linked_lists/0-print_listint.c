#include "lists.h"

/**
* print_listint - func that prints all the elms of a linked-list
* @nnode: num of nodes in linked-list(will be incremented)
* @h: linked list of type listint_t to print
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nnode = 0;

	while (h)
	{
		printf("%d\n", h->v);
		nnode++;
		h = h->next;
	}

	return (nnode);
}
