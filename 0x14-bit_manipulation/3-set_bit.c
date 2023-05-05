#include "main.h"

/**
* set_bit - funct to sets the value of a bit to 1 at a given index
* @n: pointer pointing to the change num
* @index: index of bit to be set to 1
* Return: 1 for success, -1 otherwise
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);

	return (1);
}
