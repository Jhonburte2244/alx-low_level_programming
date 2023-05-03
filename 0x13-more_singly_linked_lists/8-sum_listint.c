#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int res;

	res = 0;
	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
