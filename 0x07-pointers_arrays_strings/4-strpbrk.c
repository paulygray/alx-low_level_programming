/**
 * _strpbrk - search string for any of a set of bytes
 * @s: string
 * @accept: bytes
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
				return (s);
		}

		s++;
	}

	return (0);
}
