#include <stdio.h>
#include "lists.h"

/**
* print_list - prints elms of the linked list
* @h: pointer that points to the list_t list which is to be printed
* return: num of nodes printed
*/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		s++;
	}

	return (s);
}
