#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success) or 1 (Fail)
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	cents = atoi(argv[1]);
	coins = 0;
	if (argc != 2 || cents == NULL)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
		printf("0\n");

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;

		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
