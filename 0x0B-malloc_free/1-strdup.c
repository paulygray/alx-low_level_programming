#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to new allocated space in memory
 * containing copy of the string given as a parameter
 *
 * @str: char string
 *
 * Return: Address of newly allocated memory
 */
char *_strdup(char *str)
{
	char *cpy;
	int x, y;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	cpy = malloc(sizeof(char) * (x + 1));
	if (cpy == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		cpy[y] = str[y];

	return (cpy);
}
