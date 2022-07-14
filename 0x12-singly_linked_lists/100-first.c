#include "lists.h"
void print_this(void) __attribute__((constructor));
/**
 * print_this - prints a line before main function
 *
 * Return: Returns void
 */
void print_this(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
