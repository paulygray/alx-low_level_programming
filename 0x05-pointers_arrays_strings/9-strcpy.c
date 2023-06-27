#include "main.h"
#include <string.h>

/**
 * _strcpy - Function prototype
 *
 * Description: Copy string pointed to by src to buffer pointed to by dest
 *
 * @dest: copy to
 *
 * @src: copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int n, length;

	length = strlen(src);
	for (n = 0; n <= length; n++)
		dest[n] = src[n];

	return (dest);
}
