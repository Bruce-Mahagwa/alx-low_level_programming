#include <stdio.h>
#include <unistd.h>
/**
 * main - prints to standard error
 *
 * Return: Returns one
 */
int main(void)
{	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
