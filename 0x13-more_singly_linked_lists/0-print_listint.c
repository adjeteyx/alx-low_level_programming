#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num;
	const listint_t *current;

	for (current = h, num = 0; current != NULL; current = current->next, num++)
	{
		printf("%d\n", current->n);
	}

	return (num);
}
