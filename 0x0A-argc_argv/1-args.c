#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", argc - 1);
	if (i > argc)
		printf("%s", argv[i]);

	return (0);
}
