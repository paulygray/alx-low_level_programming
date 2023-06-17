#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase followed by newline
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
