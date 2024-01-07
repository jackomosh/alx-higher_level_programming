#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *cycle = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (cycle && fast && fast->next)
	{
		cycle = cycle->next;
		fast = fast->next->next;
		if (cycle == fast)
			return (1);
	}

	return (0);
}
