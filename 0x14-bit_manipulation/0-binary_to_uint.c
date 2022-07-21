#include "main.h"
/**
 * binary_to_uint - converts a binary number to an int
 * @b: pointer to a binary
 *
 * Return: The number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base, num, mod;

	unsigned int i, j;

	i = 0;
	j = 0;
	base = 1;
	num = 0;
	if (b == NULL)
	{
		return (0);
	}
	/*for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}*/
	while (b[i] && (b[i] >= '0' && b[i] <= '1'))
	{
		j = j * 10 + (b[i] - '0');
		i++;
	}
	while (j > 0)
	{
		mod = j % 10;
		num = num + (mod * base);
		j = j / 10;
		base = base * 2;
	}
	return (num);
}

