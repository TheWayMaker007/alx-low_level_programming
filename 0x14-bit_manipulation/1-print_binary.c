#include "main.h"

/**
* print_binary - funct to print binary representation to num
* @n: binary num to be printed
* crt_num - current num
* num_count - stores the number of count in the operation
* return: nothing to return
*/

void print_binary(unsigned long int n)
{
	int v, num_count = 0;
	unsigned long int crt_num;

	for (v = 63; v >= 0; v--)
	{
		crt_num = n >> v;
		if (crt_num & 1)
		{
			_putchar('1');
			num_count++;
		}
		else if (num_count)
			_putchar('0');
	}
	if (!num_count)
		_putchar('0');
}
