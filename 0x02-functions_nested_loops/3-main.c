#include "main.h"
#include <stdio.h>
/**
 * test_islower - test the function
 *
 * Return: Takes a number
 */
void test_islower(int n)
{
	int r;

	r = _islower(n);
	_putchar(r + '0');
	_putchar('\n');
}
/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	test_islower('H');
	return(0);
}
