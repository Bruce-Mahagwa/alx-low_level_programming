#include <stdio.h>
#include "main.h"
/**
 * print_square - Prints a square with #
 * @size: First operand
 *
 * Return: Returns void
 */
void print_square(int size)
{
	int i;

	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
