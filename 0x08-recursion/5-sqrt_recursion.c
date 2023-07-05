/**
 * sqrt_rec - recursive function
 * @x: int between 1 to n
 * @y: input param
 *
 * Return: square root
 */
int sqrt_rec(int x, int y)
{
	if (x * x > y)
		return (-1);
	if (x * x == y)
		return (x);

	return (sqrt_rec(x, y + 1));
}

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number
 *
 * Return: finished output
 */
int _sqrt_recursion(int n)
	return (sqrt_rec(n, 1));
