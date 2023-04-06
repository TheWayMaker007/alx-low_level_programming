#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: string to reverse
 *
 * return: 1 if it is true, else 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return length of a string
 * @s: string to calc the length
 *
 * return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check char recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * return: 1 if palindrome, else 0
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
