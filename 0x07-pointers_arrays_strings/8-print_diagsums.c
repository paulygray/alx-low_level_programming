#include <stdio.h>

/**
 * print_diagsums - print sum of the two diagonals of a square matrix
 * @a: array
 * @size: array size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n;
	long int z1 = 0, z2 = 0;

	for (n = 0; n < size; n++)
		z1 += a[n * size + n];

	for (n = size - 1; n >= 0; n--)
		z2 += a[n * size + (size - n - 1)];

	printf("%ld, %ld\n", z1, z2);
}
