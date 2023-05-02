#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at the head of the list
 * @head: pointer to the first node inthe list
 * @n: int to add the list
 * Return: pointer to the initial position in the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
