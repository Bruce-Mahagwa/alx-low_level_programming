#include "lists.h"
/**
 * pop_listint - deletes head of a linked list
 * @head: double pointer to a linked list
 *
 * Return: Returns head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;

	int count;

	if (*head == NULL)
	{
		return (0);
	}
	new = *head;
	*head = new->next;
	count = new->n;
	free(new);
	return (count);
}
