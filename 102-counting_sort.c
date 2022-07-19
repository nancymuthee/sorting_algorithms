#include "sort.h"
/**
 * counting_sort -sorts array of integers(ascending) by Counting sort algorithm
 * @array: array
 * @size: array size
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int i, max = array[0];
	int *count = NULL, *output = NULL;
	size_t j, tmp, total = 0;


	if (array == NULL || size < 2)
		return;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return;
	/* Find the largest element of the array */
	for (j = 0; j < size; j++)
	{
		output[j] = array[j];
		if (array[j] > max)
			max = array[j];
	}

	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
	{
		free(output);
		return;
	}
	/* Initializing the count array with all zeros */
	for (i = 0; i <= max; i++)
		count[i] = 0;
	/* Store the number of occurence of each element in count array */
	for (j = 0; j < size; j++)
		count[array[j]] += 1;
	/* Update the count array */
	for (i = 1; i <= max; i++)
	{
		tmp = count[i];
		count[i] = total;
		total += tmp;
	}

	for (j = 0; j < size; j++)
	{
		array[count[output[j]]] = output[j];
		count[output[j]] += 1;
	}
	print_array(count, max + 1);
	free(count);
	free(output);
}
