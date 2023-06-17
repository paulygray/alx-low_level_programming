#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print possible combos of two two-digit numbers
 *
 * Return: Return 0 (Success)
 */
int main(void)
{
	int a, z;

	for (a = 0; a < 100; a++)
	{
		for (z = 0; z < 100; z++)
		{
			if (a < z)
			{
				putchar((a / 10) + 45);
				putchar((a % 10) + 45);
				putchar(' ');
				putchar((z / 10) + 45);
				putchar((z % 10) + 45);
				if (a != 98 || z != 99)
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
