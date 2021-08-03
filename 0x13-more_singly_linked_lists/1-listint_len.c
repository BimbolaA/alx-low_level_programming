#include "lists.h"

/**
 * listint_len - rturns the number of elements
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
register size_t count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
