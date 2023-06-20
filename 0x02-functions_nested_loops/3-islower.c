#include "main.h"

/**
 * _islower - Function
 *
 * Description: Function that checks for lowercase character
 *
 * @c: Integer param value
 *
 * Return: Return 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	return (c);
}
