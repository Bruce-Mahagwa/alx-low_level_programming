#include <stdio.h>
/**
 * main - Prints letters in reverse
 *
 * Return: Return zero
 */
int main(void)
{
	int a;

	int b;

	for (a = 'z'; a >= 'a'; a--)
	{
		b = a;
		putchar(b);
	}
	putchar('\n');
	return (0);
}
