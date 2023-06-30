/**
 * rot13 - Function definition
 *
 * Description: Encode a string using rot13
 *
 * @str: string param pointer
 *
 * Return: *str
 */
char *rot13(char *str)
{
	int x, y;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (str[x] == a[y])
			{
				str[x] = b[y];
				break;
			}
		}
	}

	return (str);
}
