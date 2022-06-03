#include <stdio.h>
/**
 * main - Print hex numbers
 *
 * Return: Returns zero
 */
int main(void)
{
	char i;

	int c;

	int d;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c < 'g'; c++)
	{
		d = c;
		putchar(d);
	}
	putchar('\n');
	return (0);
}
