#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds element to the index.
 * @h: Head of the list
 * @idx: Index that element should be added
 * @n: Element that should be added
 *
 * Return: Address of the element,
 *	NULL if fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *node, *temp;

	temp = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (!temp && !idx)
		return (add_dnodeint(h, n));
	else if (!temp)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	while ((*temp).next)
	{
		temp = (*temp).next;
		index++;
		if (index == idx)
		{
			(*node).n = n;
			(*node).next = temp;
			(*node).prev = (*temp).prev;
			(*(*temp).prev).next = node;
			(*temp).prev = node;
			return (node);
		}
	}
	if (index == idx - 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
