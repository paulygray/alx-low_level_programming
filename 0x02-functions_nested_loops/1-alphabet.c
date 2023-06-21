#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Print the alphabet in lowercase followed by new line
 *
 * Return: (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
