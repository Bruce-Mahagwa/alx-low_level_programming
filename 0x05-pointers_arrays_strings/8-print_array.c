#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: The array
 * @n: n elements
 *
 * Return: Returns void
 */
void print_array(int *a, int n)
{
	int i;

	int j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			printf("%d\n", a[i]);
		}
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
}
