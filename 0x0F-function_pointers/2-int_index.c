#include "function_pointers"
/**
 * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++;)
			if (cmp(array[i])
				return (i);
	}
}
