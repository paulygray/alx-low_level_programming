#include "main.h"

/**
 * swap_int - Function prototype
 *
 * Description: Swap the value of two integers
 *
 * @a: Pointer to integer variable
 *
 * @b: Pointer to integer variable
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
