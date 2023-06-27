#include "main.h"

/**
 * _strlen - Function prototype
 *
 * Description: Return the length of a string
 *
 * @s: char param value
 *
 * Return: 0 (when success)
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;

	return (x);
}
