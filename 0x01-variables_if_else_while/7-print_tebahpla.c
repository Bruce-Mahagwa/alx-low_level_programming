#include <stdio.h>
/**
 * main - Prints letters in reverse
 *
 * Return: Return zero
 */
int main(void)
{
	int a;

	for (a = "z"; a >= "a"; a --)
	{
		putchar(a);
		putchar("\n");
	}
	return (0);
}
