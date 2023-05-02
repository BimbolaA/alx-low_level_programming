#include "lists.h"
listint_t *create_nodes(const int n);

/**
 * add_nodeint_end - Adds a node at the end of the list
 * @head: pointer to the current place in the list
 * @n: int to add to the list
 * Retrun: pointer to original position in the list
 */
listint_t *add_nodeint_end(listint_t **head, cont int n)
{
	listint_t *new;
	listint_t *tmp;
		new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL

		temp = *head;

	if (head == NULL)
		return (NULL);
}

while (temp->next)
	temp = temp->next;
	temp->next = new;
	return (new);
}
