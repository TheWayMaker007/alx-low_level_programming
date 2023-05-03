#include "lists.h"

/**
* add_nodeint -func that adds new node at the beginning of a linked-list
* @head: pointer to 1st node of the list
* newnode - new node in the linked-list
* @n: data to put in new node
* Return: pointer to the new node, otherwise NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;/* 1st n from singly linked list */
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
