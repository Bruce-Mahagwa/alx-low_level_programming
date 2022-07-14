#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
/**
 * list_t - an alias for a struct
 * @str: a string pointer
 * @len: length of the string
 * @next: a pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;	
       	struct list_s *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
