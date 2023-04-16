#include "search_algos.h"

/**
 * advanced_binary_recursive - searches recursively
 * @array: pointer to first element in the array
 * @left: starting index
 * @right: last index
 * @value: element to search for
 *Return: -1 or index of the value
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left > right)
		return (-1);

	printf("Searching in array: ");

	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = (left + right) / 2;

	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);

	else if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));

	else
		return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - function that searches for a value in a sorted array
 * of integers and returns the index of the first value in the array
 * @array: pointer to first element in the array
 * @size: number of elements in the array
 * @value: element to be searched for
 * Return: index of the value or -1 if array is NULL or value is absent
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
