#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter = 0;
	long a = 1;
	long b = a;
	long c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
			counter += c;

		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", counter);

	return (0);
}
