#include "list.h"

/**
 * print_list - Print the str contained in a single linked list
 * Description: This function prints the node in a linked list
 * and calculate all node in the list
 * @h: The head of the list
 * Return: The number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count;
	list_t *temp = malloc(sizeof(list_t));

	count = 0;
	temp = h;

	if (temp == NULL)
	{
		return;
	}

	while (temp->next != NULL)
	{
		len = strlen(temp->str);
		if (len == 0)
		{
			printf("[0] (nil)");
		}
		else
			printf("[%d] %s", len, temp->str);
		temp->next = temp->next->next;
		count++;
	}
}
