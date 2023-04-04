#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: string to be searched
 * @c: char to be located
 * return: if c is found - a pointer to the 1st occurence
 * if c not found - NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}

	return ('\0');
}
