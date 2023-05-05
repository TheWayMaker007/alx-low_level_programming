#include "main.h"

/*
* get_bit - funct to returns the value of a bit at a given index
* @n: num which is to be search for
* @v: integer var containing the bit value
* @index: bit value
* Return: bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int v;

	if (index > 63)
		return (-1);
	v = (n >> index) & 1;

	return (v);
}
