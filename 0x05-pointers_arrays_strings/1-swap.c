#include "main.h"

/**
 * swap_int - Write a function that swaps the values
 * of two integers
 *
 * @a: int swap
 * @b: int swap
 *
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
