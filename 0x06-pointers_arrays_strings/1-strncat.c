/**
 * _strncat - Function defintition
 *
 * Description: Concatenate two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	char *c = dest;

	while (*c != '\0')
		c++;

	for (x = 0; x < n && *src != '\0'; x++)
	{
		*c = *src;
		src++;
		c++;
	}

	*c = '\0';

	return (dest);
}
