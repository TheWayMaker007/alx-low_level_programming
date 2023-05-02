#include "lists.h"

/**
* sum_listint - funct returning sum of all data (n) of listint_t linked lis
* tempnode - temporary node
* @head: 1st node in linked-list
* Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempnode = head;

	while (tempnode)
	{
		sum += tempnode->v;
		tempnode = tempnode->next;
	}

	return (sum);
}
