#include "main.h"
#include <stdio.h>

/**
 * _sqrt - calculate natural square root
 * @n: num to calc the square root
 * @i: iterate num
 */

int _sqrt(int n, int i);

/**
 * _sqrt_recursion -function that returns the
 * natural square root of a number
 * @n: num to calculate the natural square root
 *
 * return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square root
 * @n: num to calc the square root
 * @i: iterate num
 *
 * return: natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
