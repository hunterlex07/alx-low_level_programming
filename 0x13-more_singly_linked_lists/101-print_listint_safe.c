#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number
 * of uninque nodes in a looped listit_t linked list.
 * @head: a pointer to the head of listint_t
 *
 * Return: 0, if the list is not looped
 * Otherwise, the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *gas, *rye;
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
 * print_listint_safe - prints a listint list safely
 * @head: a pointer to the head of listint_t
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
