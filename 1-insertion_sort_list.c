#include "sort.h"
/**
 * insertion_sort_list - sort a double linked list using
 * isertion algorithm
 *
 * @list: pointer to header of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *prevTemp = NULL;

	if (!list || !*list)
		return;

	temp = (*list)->next;
	prevTemp = *list;

	while (temp != NULL)
	{
		if (prevTemp && temp->n < prevTemp->n)
		{
			if (prevTemp->prev)
				prevTemp->prev->next = temp;
			else
				*list = temp;
			prevTemp->next = temp->next;
			if (temp->next)
				temp->next->prev = prevTemp;
			temp->prev = prevTemp->prev;
			temp->next = prevTemp;
			prevTemp->prev = temp;
			prevTemp = temp->prev;
			print_list(*list);
		}
		else
		{
			temp = temp->next;
			if (temp)
				prevTemp = temp->prev;
		}
	}
}
