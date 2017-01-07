#include "lists.h"
/**
  * sum_dlistint - define function
  * @void: describe argument
  * Return: 0 on success
  */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
