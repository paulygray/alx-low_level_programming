#include "main.h"

/**
 * print_last_digit - Function
 *
 * Description: Print last digit of a number
 *
 * @z: Integer param value
 *
 * Return: z
 */
int print_last_digit(int z)
{
	z %= 10;

	if (z < 0)
		z *= -1;

	_putchar(z + '0');

	return (z);
}
