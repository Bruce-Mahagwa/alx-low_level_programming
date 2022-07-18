#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints elements of a linked list
 * @h: pointer to a linked list
 *
 * Return: Number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
