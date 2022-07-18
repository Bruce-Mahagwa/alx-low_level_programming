#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: double pointer to a linked list
 * @n: node to be added
 *
 * Return: address to the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	listint_t *last;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
