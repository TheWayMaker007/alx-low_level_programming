#include "main.h"

/**
* clear_bit - funct to sets the value of a bit to 0 at a given index
* @n: pointer pointing to the num to change
* @index: clear's index of a bit
* Return: 1 for success, -1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);

return (1);
}
