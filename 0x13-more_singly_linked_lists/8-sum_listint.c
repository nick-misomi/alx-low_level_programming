#include "lists.h"

/**
 * sum_list - returns the sum of all the data (n) of a listint_t linked list
 * @head: poniter to the first node in the list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
