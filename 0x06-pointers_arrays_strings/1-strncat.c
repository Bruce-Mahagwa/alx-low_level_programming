#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates a portion of a string to another
 * @dest: First string
 * @src: Second string
 * @n: number of characters
 *
 * Return: Returns a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
