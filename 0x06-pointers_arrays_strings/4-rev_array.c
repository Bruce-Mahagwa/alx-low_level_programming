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

	i = n - 1;
	while (i >= 0)
	{
		if (i != 0)
		{
			_putchar(44);
		}
	_putchar(a[i]);
	i--;
	}
	_putchar('\n');
}
