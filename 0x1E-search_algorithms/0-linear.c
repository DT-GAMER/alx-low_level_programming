#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an
 * array of integers using linear search algorithm
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: element to search for
 * Return: -1 if array is null or value not present
 * return first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	int flag = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			flag = 1;
			return (i);
		}
	}
	if (flag != 1)
		return (-1);
	return (i);
}
