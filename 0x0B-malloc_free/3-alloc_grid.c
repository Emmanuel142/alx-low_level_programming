#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: pointer to the allocated memory
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);
	if (arr[i] == NULL)
	{
		for (j = 0; j < i; j++)
			free(arr[j]);
		free(arr);
		return (NULL);
	}
	return (arr);
}
