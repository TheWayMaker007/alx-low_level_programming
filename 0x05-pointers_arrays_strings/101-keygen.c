#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a program that generates random valid
 * passwords for the program 101-crackme
 *
 * return: successful
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, dif_half1, dif_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		dif_half1 = (sum - 2772) / 2;
		dif_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			dif_half1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + dif_half1))
			{
				password[index] -= dif_half2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
