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

	while (*str != '\0')
	{
		j++;
		str++;
	}
}
