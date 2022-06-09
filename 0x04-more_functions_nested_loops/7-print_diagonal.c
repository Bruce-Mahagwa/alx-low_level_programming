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
		_putchar('\\');
	}
}
