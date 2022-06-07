#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints lowercase letters
 *
 * Return: Returns nothing
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
