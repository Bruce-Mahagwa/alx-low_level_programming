#include "main.h"
/**
 * clear_bit - sets value of a bit to 0
 * @n: pointer to a decimal
 * @index: index to be set
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if (index > sizeof(char) * 8 - 1)
	{
		return (-1);
	}
	c = ~(1 << index);
	*n = *n & c;
	return (1);
}
