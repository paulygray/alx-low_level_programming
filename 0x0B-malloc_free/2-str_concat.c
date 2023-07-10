#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: string param
 * @s2: string param
 *
 * Return: Concatenated string (Success) or NULL (Fail)
 */
char *str_concat(char *s1, char *s2)
{
	int length, len1, len2;
	int x, y;
	char *catstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}

	length = len1 + len2;
	catstr = malloc(sizeof(char) * (length + 1));

	if (catstr == NULL)
	{
		free(catstr);
		return (NULL);
	}
	for (x = 0; x < len1; x++)
		catstr[x] = s1[x];

	y = len2;
	for (len2 = 0; len2 <= y; x++, len2++)
		catstr[x] = s2[len2];

	return (catstr);
}
