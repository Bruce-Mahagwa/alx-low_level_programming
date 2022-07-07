#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all args
 * @n: first arg
 *
 * Return: Returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list i;

	unsigned int j, sum;

	va_start(i, n);
	sum = 0;
	for (j = 0; j < n; j++)
	{
		sum += va_arg(i, unsigned int);
	}
	va_end(i);
	return (sum);
}
