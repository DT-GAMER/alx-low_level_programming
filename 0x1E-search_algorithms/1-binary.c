#include "search_algos.h"

/**
* pri_arr - prints array
* @array: array
* @start: start point
* @end: ending point
* Return nothing
**/
void pri_arr(int *array, size_t start, size_t end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);
}

/**
 * binary_search - function that searches fror a value in a
 * sorted array of integers using the binary search algorithm
 * @array: pointer to first element of the array
 * @size: number of elements in the array
 * @value: element to search for
 * Return: -1 if value is absent or array is null,
 * index of value
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int ist = 0;
	unsigned int last = size - 1;
	int middle;

	if (array == NULL)
		return (-1);
	if (size == 1)
		return (array[ist]);

	while (ist <= last)
	{
		if (ist == 0 && last == 0)
			return (-1);
		pri_arr(array, ist, last);
		middle = (ist + last) / 2;
		if (array[middle] == value)
			return (array[middle]);
		else if (array[middle] < value)
		{
			ist = middle + 1;
		}
		else if (array[middle] > value)
		{
			last = middle - 1;
		}
	}
	return (-1);
}
