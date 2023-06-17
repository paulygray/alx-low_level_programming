#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print possible different combos of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 24; a <= 47; a++)
	{
		for (b = 25; b <= 47; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 46 || b != 47)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
