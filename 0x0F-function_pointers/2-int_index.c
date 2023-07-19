/**
 * int_index - search for an integer
 * @array: array param
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: 0 (Success) or -1 (Fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
