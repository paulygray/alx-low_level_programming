#include <stdio.h>

/**
 * print_to_98 - Function definition
 *
 * Description: Print natural numbers from n to 98
 *
 * @n: Integer param value
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);

		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);

		printf("%d\n", 98);
	}
}
