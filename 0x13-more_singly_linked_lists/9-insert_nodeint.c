#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *New;
	listint_t *t = *head;

	New = malloc(sizeof(listint_t));
	if (!New || !head)
		return (NULL);

	New->n = n;
	New->next = NULL;

	if (idx == 0)
	{
		New->next = *head;
		*head = New;
		return (New);
	}

	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			New->next = t->next;
			t->next = New;
			return (New);
		}
		else
			t = t->next;
	}

	return (NULL);
}

