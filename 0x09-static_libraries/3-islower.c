#include "main.h"
/**
 *_islower - Write a function that checks for lowercase character
 *@c: Character that is been checked
 *Return: 1 for lowercase chars or 0 for else
 */
int _islower(int c)
{
	/**
	 * {
		return (c >= 'a' && c <= 'z');
	}
	*/

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
