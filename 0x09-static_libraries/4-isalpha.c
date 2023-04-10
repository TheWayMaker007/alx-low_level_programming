#include "main.h"
/**
 *_isalpha - Write a function that checks for alphabetic character
 *@c: Character been checked
 *Return: 1 for alphabet chars or 0 for else
 */
int _isalpha(int c)
{
	/**
	 * {
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
	*/
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
