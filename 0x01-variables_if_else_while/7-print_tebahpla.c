#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char smile = 'z';

	while (smile >= 'a')
	{
		putchar(smile);
		smile--;
	}
	putchar('\n');

	return (0);
}
