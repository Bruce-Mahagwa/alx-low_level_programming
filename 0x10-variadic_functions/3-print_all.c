#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of args
 *
 * Return: Returns void
 */
void print_all(const char * const format, ...)
{
	int i, j, k;

	char m;

	double x;

	char *y;

	va_list list;

	va_start(list, format);

	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
/**		if (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's')
		{
			m = va_arg(list, int);
			k = va_arg(list, int);
			x = va_arg(list, double);
			y = va_arg(list, char *);
			printf("%c, %d, %f, %s", m, k, x, y);
		}*/
		if (format[j] == 'c')
		{
			m = va_arg(list, int);
			printf("%c, ", m);
		}
		else if (format[j] == 'i')
		{
			k = va_arg(list, int);
			printf("%d, ", k);
		}
		else if (format[j] == 'f')
		{
			x = va_arg(list, double);
			printf("%f, ", x);
		}
		else if (format[j] == 's')
		{
			y = va_arg(list, char *);
			printf("%s", y);
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
