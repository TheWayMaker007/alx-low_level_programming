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
	int longi = 0;
	int k;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (k = longi; k > 0; k++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
