#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - program that prints the alphabet in lowercase, and then in uppercase
 *Return: 0 (Successful)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
