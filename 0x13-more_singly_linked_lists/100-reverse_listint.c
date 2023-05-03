#include "lists.h"

/**
* reverse_listint - a funct that reverses a listint_t linked-list
* @head: pointer, pointing at the first node in a list
* prevnode - pointer, pointing to the previous node in a list
* next - pointer pointing to the next node in a list
* Return: pointer to head node in new list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prevnode;

		prevnode = *head;
		*head = next;
	}
	*head = prevnode;

	return (*head);
}
