#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - Reverses the contents of an array
 * @a: array
 * @n: number of elements in an array
 *
 * Return: Returns void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != 0)
		{
			_putchar(',');
		}
	_putchar(a[i]);
	}
	_putchar('\n');
}
