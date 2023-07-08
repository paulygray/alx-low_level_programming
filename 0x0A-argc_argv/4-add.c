#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success) or 1 (Fail)
 */
int main(int argc, char *argv[])
{
	int x, y, sum;
	char c;

	sum = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				c = argv[x][y];

				if (isdigit(c))
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[x]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
