#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print possible different combos of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 14 ; a <= 35; a++)
	{
		for (b = 23; b <= 35; b++)
		{
			for (c = 30; c <= 35; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 33 || b != 34)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
