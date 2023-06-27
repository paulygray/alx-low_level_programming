/**
 * rev_string - Function prototype
 *
 * Description: Reverse a string
 *
 * @s: char param value
 */
void rev_string(char *s)
{
	int n, m;
	char a;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (m = 0; m < n / 2; m++)
	{
		a = s[m];
		s[m] = s[n - m - 1];
		s[n - m - 1] = a;
	}
}
