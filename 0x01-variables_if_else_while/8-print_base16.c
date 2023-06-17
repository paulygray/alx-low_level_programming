#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base = '0';
	char s = 'a';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	while (s <= 'f')
	{
		putchar(s);
		s++;
	}
	putchar('\n');

	return (0);
}
