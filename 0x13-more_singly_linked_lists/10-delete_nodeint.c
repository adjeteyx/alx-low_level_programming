#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	listint_t *prev_node = NULL;
	listint_t *curr_node = *head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (curr_node == NULL)
			return (-1);

	prev_node = curr_node;
	curr_node = curr_node->next;
	}

	if (prev_node == NULL)
		*head = curr_node->next;
	else
		prev_node->next = curr_node->next;

	free(curr_node);
	return (1);
}
