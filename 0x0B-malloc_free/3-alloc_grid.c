#include <stdio.h>
#include <stdlib.h>
/**
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);
       return (arr);	
}
