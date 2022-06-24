#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Prints the number of arguments
 * @argc: Number of arguments
 * @argv: Array of string pointers
 *
 * Return: Returns 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
