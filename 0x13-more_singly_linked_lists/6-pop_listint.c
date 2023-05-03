#include "lists.h"

/**
* pop_listint - a func that deletes head node of listint_t linked list,
* and returns the head node’s data (n) = dval
* dval - data value
* tempnode - temporary node
* @head:double  pointer to 1st elm in linked-list
* Return: deleted data value which was in elms,otherwise 0 if NULL
*/

int pop_listint(listint_t **head)
{
	listint_t *tempnode;
	int dval;

	if (!head || !*head)
		return (0);

	dval = (*head)->n;/* n from singly linked list */
	tempnode = (*head)->next;
	free(*head);
	*head = tempnode;

	return (dval);
}
