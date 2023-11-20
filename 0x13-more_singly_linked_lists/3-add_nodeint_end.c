#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: a double pointer
 * @n: address of the new node
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *front, *end;

	front = malloc(sizeof(listint_t));
	end = malloc(sizeof(listint_t));
	if (front == NULL)
		return (NULL);
	front->n = n;
	front->next = NULL;

	if (*head == NULL)
		*head = front;
	else
	{
		end = *head;
		while (end->next)

			end = end->next;
		end->next = front;
	}
	return (*head);
}
