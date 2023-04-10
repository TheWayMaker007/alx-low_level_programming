#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n: func to copy
 * @src: bytes from memory area
 * @dest: to memory erea
 * return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/**
	 * {
		int r = 0;
		int i = n;


		for (; r < i; r++)
		{
			dest[r] = src[r];
			n--;
		}
		return (dest);
	}
	*/

	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
			i++;
	}

	return (dest);
}
