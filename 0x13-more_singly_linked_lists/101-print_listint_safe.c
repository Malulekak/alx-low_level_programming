#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);


/**
 * loop_listint - Counts the number in a looped linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: Always 0 (Success)
 */

size_t loop_listint(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;

	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				nodes++;

				slow = slow->next;

				fast = fast->next;
			}

			slow = slow->next;

			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}

		slow = slow->next;

		fast = (fast->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list with cycle handling.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, num = 0;

	nodes = loop_listint(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (num = 0; num < nodes; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);

			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
