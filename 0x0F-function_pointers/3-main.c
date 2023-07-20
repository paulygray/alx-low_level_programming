#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg array
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int n, m;
	int (*f)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
	      argv[2][0] != '*' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

		n = atoi(argv[1]);
		m = atoi(argv[3]);

		printf("%d\n", f(n, m));

		return (0);

}
