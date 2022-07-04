#include <stdio.h>
#include <stdlib.h>
#ifndef PRINT_FILE_NAME
#define PRINT_FILE_NAME(X) printf("%s\n", X)
#endif
/**
 * main - prints file name
 *
 * Return: Returns 0
 */
int main()
{
	PRINT_FILE_NAME("2-main.c");
	return (0);
}
