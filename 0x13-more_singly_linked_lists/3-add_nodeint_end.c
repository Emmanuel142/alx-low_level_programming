#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: pointer to a pointer that point to the head
  * of the list
  * @n: interget to add to the list
  * Return: NULL if it failed else the the address of the current list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
