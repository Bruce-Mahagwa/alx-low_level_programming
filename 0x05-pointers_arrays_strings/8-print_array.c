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

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
