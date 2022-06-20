#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: location to be copied onto
 * @src: location to copy from
 * @n: number of bytes to be copies
 *
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
