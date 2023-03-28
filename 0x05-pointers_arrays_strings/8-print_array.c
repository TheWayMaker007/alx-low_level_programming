#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: Array of int
 * @n: Num of element of the Array
 * return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}
		if (j == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
