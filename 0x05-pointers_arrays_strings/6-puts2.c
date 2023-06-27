#include "main.h"
#include <string.h>

/**
 * puts2 - Function prototype
 *
 * Description: Print every other character of string from first character
 *
 * @str: char param value
 */
void puts2(char *str)
{
	int n, length;

	length = strlen(str);
	for (n = 0; n < length; n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
