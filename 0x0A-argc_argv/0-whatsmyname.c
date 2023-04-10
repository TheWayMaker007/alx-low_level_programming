#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: num of arguments
 * @argv: arr of arguments
 *
 * Return: On success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
