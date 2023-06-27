#include "main.h"
#include <string.h>

/**
 * puts_half - Function prototype
 *
 * Description: Print half of a string
 *
 * @str: char param value
 */
void puts_half(char *str)
{
	int n, length;
	int m = 0;

	length = strlen(str);
	if (length % 2 != 0)
		m += 1;

	for (n = (length + m) / 2; n < length; n++)
		_putchar(str[n]);

	_putchar('\n');
}
