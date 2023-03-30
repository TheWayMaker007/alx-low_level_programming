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
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
