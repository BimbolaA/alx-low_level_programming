#include "lists.h"
/**
 * listint_len - get the number of nodes in a list
 * @h: head of the count
 *
 * Return: the amount of nodes
 */

size_t listint_len(const listint_t *h)

{
	size_t count = 0;

	while (h)
	{
		count++;

		h = h->next;
	}

	return (count);

}
