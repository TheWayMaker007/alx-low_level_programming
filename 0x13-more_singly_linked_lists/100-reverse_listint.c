#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: pointer, pointing at the first node in a list
* prevnode - pointer, pointing to the previous node in a list
* nextnode - pointer pointing to the next node in a list
* Return: pointer to head node in new list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL;
	listint_t *nextnode = NULL;

	while (*head)
	{
		nextnode = (*head)->nextnode;
		(*head)->nextnode = prevnode;

		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;

	return (*head);
}
