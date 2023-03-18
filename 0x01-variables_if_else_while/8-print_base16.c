#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - program that prints the alphabet in lowercase, and then in uppercase
 *Return: 0 (Successful)
 */
int main(void)
{
	int d;
	char low;

	for (d = 0; d <= 10; d++)
	putcjar((d % 10) + '0');

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
