#include "lists.h"
#include <stdio.h>
/**
 * listint_len - A FUCTION THAT RETURN NUMBER OF ELEMENT
 * @h: a node pointer to for linking
 *
 * Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	int counter = 0;

	tmp = h;
	while (tmp)
	{
	counter++;
	tmp = tmp->next;
	}
	return (counter);
}
