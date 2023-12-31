/**
 * _strchr - locate a character in a string
 * @s: string input
 * @c: character to find
 *
 * Return: return pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; s[a] != '\0'; a++)
		if (s[a] == c)
			break;
	return (s[a] == c ? (s + a) : '\0');
}
