#include <stdio.h>

/**
 * main - Print a - z in lowercase using putchar
 *
 * Return: Return 0
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while
		(alpha <= 'z'){
			putchar(alpha);
			alpha++;
		}
	putchar('\n');

	return (0);
}
