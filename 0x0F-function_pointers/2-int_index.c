#include "function_pointers.h"
/**
 * int_index - Search for an integer
 * @array:int
 * @size:int
 * @cmp:function
 * Return:index of the integer searched for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
