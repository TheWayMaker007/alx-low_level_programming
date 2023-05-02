#include "lists.h"

/**
* print_listint - func that prints all the elms of a linked-list
* @n-of-nod: num of nodes in linked-list(will be incremented)
* @t: linked list of type listint_t to print
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t n-of-nod = 0;

	while (t)
	{
		printf("%d\n", t->v);
		n-of-nod++;
		t = t->next;
	}

	return (n-of-nod);
}
