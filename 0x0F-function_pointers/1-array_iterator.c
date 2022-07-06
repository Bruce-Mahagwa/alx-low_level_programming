#include "function_pointers.h"
#include <stddef.h>
/**
 * array-iterator - prints an array using function pointers
 * @array: array to be printed
 * @size_t size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
