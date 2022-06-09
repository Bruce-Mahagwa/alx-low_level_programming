#include <stdio.h>
#include <math.h>
/**
 * main - prints largest prime factor
 * @n: First operand
 *
 * Return: Returns max prime factor
 */
int main(int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i < sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	return (max);
}
