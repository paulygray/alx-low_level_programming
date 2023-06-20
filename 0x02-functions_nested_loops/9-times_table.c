#include "main.h"

/**
 * times_table - Function
 *
 * Description: Print the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int x, y, z;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			z = x * y;

			if (x == 0)
				_putchar(z + '0');
			else if (z >= 10)
			{
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			if (a != 9)
				_putchar(',');
		}

		_putchar('\n');
	}
}
