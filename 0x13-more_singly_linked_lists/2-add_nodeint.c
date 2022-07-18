#include "lists.h"
#include <stdlib.h>
#include <limits.h>
/**
 * add_nodeint - adds node at the beginning of a linked list
 * @head: double pointer to the head of a linked list
 * @n: int to be inserted
 *
 * Return: Address of the new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
