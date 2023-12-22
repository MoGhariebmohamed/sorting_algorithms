#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *list_swaap - to swap 2 lists
 *
 *@a: the first list
 *@b: the next to a list
 * Return: non
 */
void list_swaap(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
	{
		a->prev->next = b;
	}
	if (b->next != NULL)
	{
	b->next->prev = a;
	}
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
	}

/**
 *insertion_sort_list - sorts a  double linked list in ascending order
 *
 *@list: an unsorted list
 * Return: Always 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head;
	listint_t *prev_head;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	head = (*list)->next;
	while (head != NULL)
	{
		prev_head = head;
		head = head->next;
	while (prev_head->prev != NULL && prev_head != NULL)
	{
		if (prev_head->prev->n > prev_head->n)
		{
			list_swaap(prev_head->prev, prev_head);
			if (prev_head->prev == NULL)
			{
				*list = prev_head;
			}
		print_list((const listint_t *) *list);
		}
		else
		{
			prev_head = prev_head->prev;
		}
	}
	}
}
