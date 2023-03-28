#include "main.h"

/**
 * print_rev - Write a function that prints a
 * string, in reverse, followed by a new line.
 *
 * @s: string
 *
 * return: successful
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	for (k -= 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
