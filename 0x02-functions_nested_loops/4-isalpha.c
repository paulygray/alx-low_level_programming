#include "main.h"

/**
 * _isalpha - Function
 *
 * Description: Function that checks for alphabetic character
 *
 * @c: Integer param value
 *
 * Return: Return 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

	return (c);
}
