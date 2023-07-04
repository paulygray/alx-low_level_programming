/**
 * _memcpy - copy memory area
 * @dest: input pointer to string address
 * @src: input pointer to the source
 * @n: number of bytes
 *
 * Return: return to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
