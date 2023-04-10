#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: string pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
	/**
	 * {
		puts("\"Programming is like building a multilingual puzzle");
		return (0);
	}
	*/
}