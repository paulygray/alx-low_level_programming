/**
 * _strcat - Function definition
 *
 * Description: Concatenate two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (c);
}
