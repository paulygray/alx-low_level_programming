/**
 * string_toupper - Function definition
 *
 * Description: Change lowercase letters of string to uppercase
 *
 * @str: string value
 *
 * Return: string output
 */
char *string_toupper(char *str)
{
	char *c = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;

		str++;
	}

	return (c);
}
