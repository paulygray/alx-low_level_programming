#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: string of formats
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int n = 0, m, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[n])
	{
		m = 0;
		while (t_arg[m])
		{
			if (format[n] == t_arg[m] && c)
			{
				printf(", ");
				break;
			} m++;
		}

		switch (format[n])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(valist, char *), c = 1;

				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} n++;
	}

	printf("\n"), va_end(valist);
}










