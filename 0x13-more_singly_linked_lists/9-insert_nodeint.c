#include "lists.h"

/**
* insert_nodeint_at_index - funct that inserts new node at given position
* tempnode - temporary node(pointer pointing to another pointer)
* newnode - pointer to listint_t list which points to new node
* @e: unsigned int variable
* @head: double pointer that points to 1st node in the list
* @idx: index at new node position
* @n: data to insert in the new node
* Return: pointer to the new node, otherwise NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int e;
	listint_t *newnode;
	listint_t *tempnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->v = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (e = 0; tempnode && e < idx; e++)
	{
		if (e == idx - 1)
		{
			newnode->next = tempnode->next;
			tempnode->next = newnode;
			return (newnode);
		}
		else
			tempnode = tempnode->next;
	}

	return (NULL);
}
