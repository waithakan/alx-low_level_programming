#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{

	const listint_t *tortoise = head, *hare = head;
	size_t nodes = 0;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			nodes++;
			hare = hare->next;
			while (tortoise != hare)
			{
				nodes++;
				hare = hare->next;
			}
			break;
		}
	}

	return (nodes);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{

	size_t nodes = 0;
	const listint_t *temp = head;
	size_t i;

	nodes = looped_listint_len(head);

	for (i = 0; i < nodes; i++)
	{

		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		if (i == nodes - 1)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			break;
		}
	}

	if (temp != NULL)
	{
		for (; temp != NULL; temp = temp->next)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			if (temp->next == head)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				break;
			}
		}
	}

	return (nodes);
}
