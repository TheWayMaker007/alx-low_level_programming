#include "main.h"

/**
 * _isdigit - Check digit
 * @c: Check value
 * Return: 1 for digit & 0 for char
 */

int _isdigit(int c)
{
	/**
	 * {
		return (c >= '0' && c <= '9');
	}
	*/

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
