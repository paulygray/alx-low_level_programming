#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit numbers from 0, followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
