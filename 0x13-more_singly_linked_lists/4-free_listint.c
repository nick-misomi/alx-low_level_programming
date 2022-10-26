#include "lists.h"
#include <stdlib.h>

/**
 * free_listint(listint_t *head)
 * @head: pointer to the beginning of the list
 *
 * Return: void
 */
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}

}
