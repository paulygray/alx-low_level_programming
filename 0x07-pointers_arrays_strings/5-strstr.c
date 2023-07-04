/**
 * _strstr - locate a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int n, m;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[n + m] != needle[m])
				break;
		}

		if (needle[m] == '\0')
			return (&haystack[n]);
	}

	return (0);
}
