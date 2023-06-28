/**
 * _atoi - Function prototype
 *
 * Description: Convert string to an integer
 *
 * @s: string param to be converted
 *
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int n;
	int x = 0;
	int y = -1;
	int z = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == '-')
			y *= -1;

		if (s[n] >= '0' && s[n] <= '9')
		{
			x *= 10;
			x -= (s[n] - '0');
			z = 1;
		}
		else if (z == 1)
			break;
	}
	x = y * x;
	return (x);
}
