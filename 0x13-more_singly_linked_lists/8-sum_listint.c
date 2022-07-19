#include "lists.h"
/**
 * sum_listint - finds sum of n data in a linked list
 * @head: pointer to a linked list
 *
 * Return: Returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
