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

	char ch = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar(ch);
			}
			else
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
