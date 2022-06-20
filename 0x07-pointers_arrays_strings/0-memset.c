#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with constant byte
 * @s: First operand
 * @b: Second operand
 * @n: Third operand
 *
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
