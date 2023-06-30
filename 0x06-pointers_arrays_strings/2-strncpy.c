/**
 * _strncpy - Function definition
 *
 * Description: Copy a string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *c = dest;
	int x;

	for (x = 0; x < n; x++)
	{
		if (*src != '\0')
		{
			*c = *src;
			src++;
			c++;
		}
		else
		{
			*c = '\0';
			c++;
		}
	}

	return (dest);
}
