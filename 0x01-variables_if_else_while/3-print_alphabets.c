#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print uppercase and lowercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bet;

	for (bet = 0; bet < 26; bet++)
	{
		putchar('a' + bet);
	}

	for (bet = 0; bet < 26; bet++)
	{
		putchar('A' + bet);
	}

	putchar('\n');

	return (0);
}
