#include <stdio.h>

/**
 * main - Print a - z in lowercase using putchar
 *
 * Return: Return 0
 */
int main(void)
{
	for (char alpha = 'a'; alpha <= 's'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
