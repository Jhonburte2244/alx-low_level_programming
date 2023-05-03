#include "lists.h"

/**
 * inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 *@n:integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *add;
	listint_t *y;

	y = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && y != NULL; x++)
		{
			y = y->next;
		}
	}

	if (y == NULL && idx != 0)
		return (NULL);

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
	}
	else
	{
		add->next = y->next;
		y->next = add;
	}

	return (add);
}

