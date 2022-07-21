#include "main.h"
/**
 * get_bit - gives bit at an index
 * @n: decimal number
 * @index: index
 *
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j, i;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	i = 1 << index;
	j = n && i;
	if (i == j)
	{
		return (0);
	}
	return (1);
}
