#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number
 * of uninque nodes in a looped listit_t linked list.
 * @head: a pointer to the head of listint_t
 *
 * Return: 0, if the list is not looped
 * Otherwise, the number of unique nodes in the list
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *gas, *rye;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	gas = head->next;
	rye = (head->next)->next;

	while (rye)
	{
		if (gas == rye)
		{
			gas = head;
			while (gas != rye)
			{
				nodes++;
				gas = gas->next;
				rye = rye->next;
			}

			gas = gas->next;
			while (gas != rye)
			{
				nodes++;
				gas = gas->next;
			}

			return (nodes);
		}
		gas = gas->next;
		rye = (rye->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint list safely
 * @h: a pointer to the head of listint_t
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
