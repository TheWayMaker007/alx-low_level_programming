#include <stdio.h>
#include <stdlib.h>
/**
 *main - Program to print the Alphabet
 *Return: 0 (Successful)
 */
int main(void)
{
	int lowerC = 'a';

	while (lowerC <= 'z')
	{
	putchar(lowerC);
	lowerC += 1;
	}
	putchar('\n');
	return (0);
}
