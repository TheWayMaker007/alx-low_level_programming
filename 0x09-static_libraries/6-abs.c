#include "main.h"
/**
 *_abs - Write a function that computes the absolute value of an integer
 *@c: Character been checked
 *Return: Absolute value or 0 for else
 */
int _abs(int c)
{
	/**
	 * if (c >= 0)
	{
		return (c);
	}
	return (-c);
	*/
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
