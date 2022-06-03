#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints lower case letters
 *
 * Return: Returns zero
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
