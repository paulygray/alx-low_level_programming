#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit numbers from 0, followed by new line
 *
 * Return: Return 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}
