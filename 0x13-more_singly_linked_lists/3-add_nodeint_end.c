#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first element
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New;
	listint_t *t = *head;

	New = malloc(sizeof(listint_t));
	if (!New)
		return (NULL);

	New->n = n;
	New->next = NULL;

	if (*head == NULL)
	{
		*head = New;
		return (New);
	}

	while (t->next)
		t = t->next;

	t->next = New;

	return (New);
}

