#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **array_range - a function that creates an array of integers.
 *@min : int
 *@max : int
 *Return: pointer to array of integer
 */
int *array_range(int min, int max)
{
	int *arr;
	int b;

	if (min > max)
		return (NULL);
	b = max - min;

	arr = malloc(sizeof(int) * (b + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[b] = max;
		b--;
		max--;
	}
	arr[b] = min;
	return (arr);
}
