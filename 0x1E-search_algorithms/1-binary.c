#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
  *binary_search - searches for a value in a sorted array of integers
  *@array: is a pointer to the first element of the array to search
  *@size: number of elements in array
  *@value: the value to search for
  *Return: the index where value is located
  */
int binary_search(int *array, size_t size, int value)
{
	int i, left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
			{
				printf(", %d", array[i]);
			}
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
