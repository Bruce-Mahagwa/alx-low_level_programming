#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - copies a string
 * @dest: First paremeter
 * @src: Second parameter
 *
 * Return: Returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{	
	strcpy(dest, src);
	return (dest);
}
