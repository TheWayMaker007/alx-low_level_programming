#include "main.h"

/**
 * print_array - Write a function that reverses
 * the content of an array of integers
 * @a: array
 * @n: num of elements
 * return: successful
 */

void print_array(int *a, int n)
{
	int i = 0;
	int count = 0;
	n = n - 1;

	while (count <= n)
	{
		count = a[count];
		a[count++] = a[n];
		a[n--] = i;
	}
}
