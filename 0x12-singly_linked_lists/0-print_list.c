#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - Print the str contained in a single linked list
 * Description: This function prints the node in a linked list
 * and calculate all node in the list
 * @h: The head of the list
 * Return: The number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	list_t *temp = malloc(sizeof(list_t));

	count = 0;
	temp = h;

	if (temp == NULL)
	{
		return;
	}

	while (temp != NULL)
	{
		len = strlen(temp->str);
		if (len == 0)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
}
