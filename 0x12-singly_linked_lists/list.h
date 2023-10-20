#ifndef __LIST_H__
#define __LIST_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_t - A single linked list
 * @str: The content of the list
 * @next: The pointer to the next node of the list
 */
typedef struct list_t
{
	char *str;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
#endif
