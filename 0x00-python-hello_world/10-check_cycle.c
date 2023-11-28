#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - function that check the cycle
 * @list: pinter to list that will be checked
 * Return: 0 on sucess 1 on failer
*/

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
