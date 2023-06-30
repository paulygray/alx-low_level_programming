/**
 * leet - Function definition
 *
 * Description: Encode a string to 1337
 *
 * @c: string param value
 *
 * Return: encoded string
 */
char *leet(char *c)
{
	int n, m;

	char x1[] = "aAeEoOtTlL";
	char x2[] = "4433007711";

	for (n = 0; c[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (c[n] == x1[m])
				c[n] = x2[m];
		}
	}

	return (c);
}
