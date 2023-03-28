#include "main.h"

/**
 * puts_half - Write a function that prints half of a
 * string, followed by a new line.
 *
 * @str: string to print
 *
 * return: void
 */

void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}

	if  (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
}
