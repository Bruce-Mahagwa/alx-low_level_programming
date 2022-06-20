#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: String to be scanned
 * @accept: characters tobe matched
 *
 * Return: Returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
