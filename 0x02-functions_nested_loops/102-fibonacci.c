#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	long a = 1;
	long b = a + 1;
	long c = a + b;

	printf("%ld, %ld, ", a, b);
	for (count = 2; count < 50; count++)
	{
		printf("%ld", c);
		a = b;
		b = c;
		c = a + b;

		if (counter < 50)
			printf(", ");
	}
	printf("\n");

	return (0);
}
