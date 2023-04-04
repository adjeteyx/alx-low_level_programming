#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *prev_node = NULL;
	listint_t *curr_node = *head;

	if (!head)
		return (NULL);

	for (i = 0; curr_node && i < idx; i++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	if (i != idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = curr_node;

	if (prev_node)
		prev_node->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
