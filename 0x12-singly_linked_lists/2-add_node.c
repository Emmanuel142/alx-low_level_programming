#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : strings of characters
 * Return: total character in a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: pointer to the pointer that point
 * to the head of a link list.
 * @str: The list input
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);

	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
