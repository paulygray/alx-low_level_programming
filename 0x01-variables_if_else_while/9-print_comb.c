#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Possible combos of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int jon;

	for (jon = 48; jon < 58; jon++)
	{
		putchar(jon);
		if (jon != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
