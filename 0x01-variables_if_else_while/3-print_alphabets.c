#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - program that prints the alphabet in lowercase, and then in uppercase
 *Return: 0 (Successful)
 */
int main(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
