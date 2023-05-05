#include "main.h"

/**
* flip_bits - funct to returns numb of bits
* needed to flip to get from one num to another
* @n: first num
* @m: second num
* num_count - var to store  the number of counts
* num_needed - the excussive num to fit in
* Return: num of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, num_count = 0;
	unsigned long int crt_num;
	unsigned long int num_needed = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		crt_num = num_needed >> v;
		if (crt_num & 1)
			num_count++;
	}

	return (num_count);
}
