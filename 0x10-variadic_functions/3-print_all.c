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

	char p;

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
		p = format[j];
		switch(p)
		{
			case 'c':
				m = va_arg(list, int);
				printf("%c, ", m);
				break;
			case 'i':
				k = va_arg(list, int);
				printf("%d, ", k);
				break;
			case 'f':
				x = va_arg(list, double);
				printf("%f, ", x);
				break;
			case 's':
				y = va_arg(list, char *);
				printf("%s", y);
				break;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
