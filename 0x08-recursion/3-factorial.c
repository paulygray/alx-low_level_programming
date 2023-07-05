/**
 * factorial - return factorial of a given number
 * @n: int param
 *
 * Return: math value of n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
