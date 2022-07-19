#include "sort.h"
/**
 * swap - swaps 2 elements
 * @elm: an element
 * @other_elm: other element
 * Return: void
 */
void swap(int *elm, int *other_elm)
{
	int tmp;

	tmp = *elm;
	*elm = *other_elm;
	*other_elm = tmp;
}

/**
 * partition - target of partitions is, given an array and an element x
 * of an array as the pivot, put x at its correct position in a sorted
 * array and put all smaller elements (smaller than x) before x, and
 * put all greater elements (greater than x) after x
 * @array: array
 * @low: starting index
 * @high: ending index
 * @size: array size
 * Return: the index of the last swap
 */
int partition(int *array, int low, int high, size_t size)
{
	/* pivot (Element to be placed at right position) */
	int pivot = array[high];
	/**
	 * i (Index of smaller element and indicates the
	 * right position of pivot found so far)
	 */
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		/* If current element is smaller than the pivot */
		if (array[j] < pivot)
		{
			i++;    /* increment index of smaller element */
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (pivot < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * quickSort - picks an element as a pivot and partitions the given
 * array around the picked pivot
 * @array: array
 * @low: starting index
 * @high: ending index
 * @size: array size
 * Return: void
 */
void quickSort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		/* pivot is partitioning index, array[pivot] is now at right place */
		pivot = partition(array, low, high, size);
		quickSort(array, low, pivot - 1, size);    /* Before pivot */
		quickSort(array, pivot + 1, high, size);   /* After pivot */
	}
}

/**
 * quick_sort_hoare -sorts array of integers(ascending) by Quick sort algorithm
 * @array: array
 * @size: array size
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quickSort(array, 0, (int)size - 1, size);
}
