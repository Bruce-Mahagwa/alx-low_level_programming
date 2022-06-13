#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps 2 ints
 * @a: First pointer
 * @b: Second pointer
 *
 * Return: Returns void
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *b;
	*b = *a;
	*a = value;
}
