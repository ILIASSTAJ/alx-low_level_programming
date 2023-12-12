#include "search_algos.h"

/**
  * linear_search - Searches for value in an array
  * using linear search.
  * @array: pointer to first element in array to search.
  * @size: no of elements in array.
  * @value:  value to search for.
  *
  * Return: If the value is absent or NULL array -1.
  *         Success, first index where value is located.
  *
  * Description: Prints a value each time it's compared in array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}

	return (-1);
}
