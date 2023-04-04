#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t counter = 0;

	while (cursor != NULL)
	{
		counter += 1;
		cursor = cursor->next;
	}
	return (counter);
}
