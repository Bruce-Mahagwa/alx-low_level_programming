#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints a diagonal line
 * @n: First operand
 *
 * Return: Returns void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
