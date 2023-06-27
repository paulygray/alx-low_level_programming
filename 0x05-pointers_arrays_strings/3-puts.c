#include "main.h"

/**
 * _puts - Function prototype
 *
 * Description: Print a string followed by newline
 *
 * @str: char param value
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
