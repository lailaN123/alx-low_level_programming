#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node’s data (n)
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int nb;

	if (!head || !*head)
		return (0);

	nb = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (nb);
}

