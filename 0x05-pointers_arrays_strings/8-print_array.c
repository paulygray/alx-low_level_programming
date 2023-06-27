#include "main.h"
#include <stdio.h>

/**
 * print_array - Function prototype
 *
 * Description: Print n elements of an array of integers
 *
 * @a: int param value
 *
 * @n: int param value
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
