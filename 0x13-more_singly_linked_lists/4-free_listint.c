#include "lists.h"

/**
 * free_listint - frees a a listint_t list.
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}

