#include "main.h"

/**
* binary_to_uint - a funct to convert binary num to an unsigned int
* @b: binary num stored in a str
* dval - unsigned int
* Return: converted str to bin-numb
*/

unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int dval = 0;

	if (!b)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		dval = 2 * dval + (b[v] - '0');
	}

	return (dval);
}
