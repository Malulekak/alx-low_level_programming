
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list with cycle handling.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	while (*h && *h > (*h)->next)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		++count;
	}
	if (*h)
	{
		free(*h);
		++count;
	}
	*h = NULL;
	return (count);
}
