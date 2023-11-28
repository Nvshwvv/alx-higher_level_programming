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
	listint_t *turtle = list, *rabbit = list;

	if (!list)
		return (0);
	while (turtle && rabbit && rabbit->next)
	{
		turtle = turtle->next;
		rabbit = rabbit->next;
		if (turtle == rabbit)
			return (1);
	}
	return (0);
}
