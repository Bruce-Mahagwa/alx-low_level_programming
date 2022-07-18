#include "lists.h"
/**
 * free-listint - frees a linked list
 * @head: a pointer to a linked list
 *
 * Return: Returns void
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
