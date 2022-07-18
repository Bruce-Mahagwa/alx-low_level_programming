#include "lists.h"
/**
 * listint_len - finds number of elements in a linked list
 * @h: pointer to a linked list
 *
 * Return: Length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
return (count);
}
