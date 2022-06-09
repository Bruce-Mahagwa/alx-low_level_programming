#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle with #
 * @size: First operand size of triangle
 *
 * Return: Returns void
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; ++)
	{
		int j;

