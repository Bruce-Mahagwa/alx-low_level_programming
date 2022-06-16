#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a section of a string
 * @dest: First string
 * @src: Second string
 * @n: number of characters to be copied
 *
 * Return: Returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
