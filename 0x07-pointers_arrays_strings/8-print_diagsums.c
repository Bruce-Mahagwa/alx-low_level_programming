#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints sum of diagonals
 * @a: array
 * @size: array size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, one = 0, two = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			one += *(a + 1);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			two += *(a + 1);
		}
	printf("%d, %d\n", one, two);
}
