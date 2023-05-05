#include "main.h"

/**
* get_endianness - Write a funct to checks the endianness
* @v: repesents little endianness
* @x: pointer pointing to the index of
* Return: 0 for big endain, 1 for little endian
*/
int get_endianness(void)
{
	unsigned int v = 1;
	char *x = (char *) &v;

	return (*x);
}
