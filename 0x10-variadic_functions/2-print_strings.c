#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints a string
 * @separator: goes between the strings
 * @n: number of args
 *
 * Return: Returns void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i, j;

	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator[0] == '\0')
		{
			printf("%s ", va_arg(list, char *));
		}
		else
		{
			printf("%s%s", va_arg(list, char *), separator);
		}
	}
	for (j = n - 1; j < n; j++)
	{
		printf("%s", va_arg(list, char *));
	}
	printf("\n");
	va_end(list);
}
