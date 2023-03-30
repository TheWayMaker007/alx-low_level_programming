#include "main.h"

/**
 * _strncat - joins 2 strings with n byte
 * @dest: copy to
 * @src: copy from
 * @n: num of char to be copied
 * return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
