/**
 * _memset - fill memory with a constant byte
 * @s: starting address of memory
 * @b: value to fill
 * @n: number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
