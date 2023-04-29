#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in list_t
 * @p: pointer to list_t elements
 * Return: number of nodes in  list
 **/
size_t list_len(const list_t *p)
{
	size_t counter;

	counter = 0;
	while (p != NULL)
	{
		p = p->next;
		counter++;
	}
	return (counter);
}
