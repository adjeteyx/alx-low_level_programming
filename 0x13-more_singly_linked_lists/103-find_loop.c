#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *snail = head;
listint_t *cheetah = head;

	if (!head)
	return (NULL);

	while (snail && cheetah && cheetah->next)
	{
		cheetah = cheetah->next->next;
		snail = snail->next;
		if (cheetah == snail)
		{
		snail = head;
		while (snail != cheetah)
	{
		snail = snail->next;
		cheetah = cheetah->next;
	}
		return (cheetah);
		}
	}

	return (NULL);
}
