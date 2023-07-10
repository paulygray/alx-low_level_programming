#include <stdlib.h>

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array param
 * @c: char param
 *
 * Return: Pointer to array (Success) or NULL (Fail)
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;

	return (str);
}
