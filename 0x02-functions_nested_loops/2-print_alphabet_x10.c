#include "main.h"

/**
 * print_alphabet_x10 - Function
 *
 * Description: Print the alphabet in lowercase 10 times on a new line
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char alpha;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_puchar(alpha);

		_putchar('\n');
		x++;
	}
}
