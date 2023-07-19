#include "function_pointers.h"

/**
 * array_iterator - execute function given as a parameter
 * on each element of an array
 * @array: array param
 * @size: size of array
 * @action: fuction pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
