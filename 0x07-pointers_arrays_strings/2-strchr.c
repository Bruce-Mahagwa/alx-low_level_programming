#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: String to be searched
 * @c: character to be searched
 *
 * Return: Returns a pointer to the occurrence of the character
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
