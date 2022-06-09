#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - Prints numbers 1 to 100 with fizz and buzz interpolations
 *
 * Return: Retuns zero
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	putchar(' ');
	putchar('\n');
	}
	return (0);
}
