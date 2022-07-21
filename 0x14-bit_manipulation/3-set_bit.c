#include "main.h"
/**
 * set_bit - sets a value to a bit
 * @n: a decimal
 * @index: index to be changed
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	c = 1 << index;
	*n = *n | c;
	return (1);
}
