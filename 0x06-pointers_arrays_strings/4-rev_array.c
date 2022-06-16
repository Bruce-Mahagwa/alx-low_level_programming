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

	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(a[j]);
	}
}
