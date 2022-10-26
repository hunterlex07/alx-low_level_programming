#include "lists.h"

/**
 * find_listint_loop - finds the loop contained
 * in a listint_t linked list
 * @head: a pointer to the head of listint_t
 *
 * Return: NULL, if there is no loop
 * Otherwise, return the address of the node
 * where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gas, *rye;

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
				gas = gas->next;
				rye = rye->next;
			}

			return (gas);
		}
		gas = gas->next;
		rye = (rye->next)->next;
	}

	return (NULL);
}
