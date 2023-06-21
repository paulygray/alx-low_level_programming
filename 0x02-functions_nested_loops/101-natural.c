#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			m += n;
	}
	printf("%d\n", m);

	return (0);
}
