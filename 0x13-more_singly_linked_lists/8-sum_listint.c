
#include "lists.h"

/**
 * sum_listint - sums up all the data in a linked list
 * @head: head of the list
 *
 * Return: sum of the number
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum_total= 0;

	while (cursor != NULL)
	{
		sum_total += cursor->n;
		cursor = cursor->next;
	}
	return (sum_total);
}
