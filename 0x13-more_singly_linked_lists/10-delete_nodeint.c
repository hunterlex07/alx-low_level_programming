#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the
 * nodes at a given index of a listint_t list
 * @head: a pointer to the address of the listint_t
 * @index: the index of the node to be deleted
 *
 * Return: 1, if sucess and -1, if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
