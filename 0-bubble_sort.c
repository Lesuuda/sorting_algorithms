#include "sort.h"
/**
 * swap - swaps two values if one is greater than the other
 * @a: pointer to the first number
 * @b: pointer to the other number
 * Return: always 0
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - function to implement the bubble sort algorithm
 * @array: the array of numbers to sort
 * @size: length of the array
 * Return: always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
