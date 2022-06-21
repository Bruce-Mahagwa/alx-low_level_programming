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

	int p;

	int s;

	int i;

	int j;
	
	int t[size][size];

	a = t;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				p += a[i][j];
			}
			if ((i + j) == (size - 1))
			{
				s += a[i][j];
			}
		}
	}
	printf("%d, ", p);
	printf("%d", s);
}
