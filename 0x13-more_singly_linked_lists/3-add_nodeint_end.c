#include "lists.h"

/**
* add_nodeint_end - func that adds node at the end of linked-list
* @head: pointer pointing the first elm in list
* newnode - new node in the linked-list
* tempnode - temporary node
* @n: data to add in the new elm
* Return: pointer to new node, otherwise NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tempnode = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->v = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tempnode->next)
		tempnode = tempnode->next;
	tempnode->next = newnode;

	return (newnode);
}
