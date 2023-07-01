/**
 * print_number - print numbers chars
 *
 * @n: integer params
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int r;

	r = n;
	if (n < 0)
	{
		_putchar('-');
		r = -n;
	}
	if (r / 10 != 0)
	{
		print_number(r / 10);
	}
	_putchar((r % 10) + '0');
}
