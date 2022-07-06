#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - checks for characteristics of elements in an array
 * @array: array to be checked
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: Returns an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))	
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (0);
}
