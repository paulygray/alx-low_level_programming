#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generate random valid passwords for program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, sum;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (n = 0; n < 100; n++)
	{
		pass[n] = rand() % 78;
		sum += (pass[n] + '0');
		putchar(pass[n] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}

	return (0);
}
