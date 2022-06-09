#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a straight line
 * @n: First operand
 *
 * Return: Returns void
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
		_putchar('\n');
	}
}
