#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list with cycle handling.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int i;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;

		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
