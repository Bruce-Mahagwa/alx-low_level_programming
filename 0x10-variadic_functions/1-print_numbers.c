#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - lists number args
 * @separator: a comma
 * @n: size of args list
 *
 * Return: Returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
		{
			printf("%d ", va_arg(list, int));
		}
		else
		{
			printf("%d%s ", va_arg(list, int), separator);
		}
	}
	for (i = (n - 1); i < n; i++)
	{
		printf("%d", va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}
