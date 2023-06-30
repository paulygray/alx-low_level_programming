/**
 * reverse_array - function that reverses the content of
 * an array of integers.
 * @a: array of integers
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
