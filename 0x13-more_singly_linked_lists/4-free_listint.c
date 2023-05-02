#include "lists.h"
/**
 * free_listint - frees a list node
 * @head: pointer to the first element of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
