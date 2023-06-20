/**
 * _abs - Function
 *
 * Description: Compute absolute value of an integer
 *
 * @n: Integer param value
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
	{
		n *= -1;
		return (n);
	}

	return (n);
}
