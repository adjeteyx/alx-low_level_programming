#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int curr_index = 0;
	listint_t *curr_node = head;

	while (curr_node && curr_index < index)
	{
	curr_node = curr_node->next;
	curr_index++;
	}

	return (curr_node ? curr_node : NULL);
}
