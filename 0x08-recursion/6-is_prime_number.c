#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: num to be checked
 *
 * return: int value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: num to be checked
 * @i: interation times
 *
 * return: 1 for prime or 0 composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}

	return (check_prime(n, i + 1));
}
