#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	if (!*head)
		return (NULL);

	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}

	(*head)->next = prev_node;

	return (*head);
}

