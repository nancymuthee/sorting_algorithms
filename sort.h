#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap_node(listint_t *node, listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void swap_next(listint_t *node, listint_t **list);
void swap_previous(listint_t *node, listint_t **list);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void print_range(int *array, int r, int r1);
void compAndSwap(int a[], int i, int j, int dir);
void bitonicMerge(int a[], int low, int n, int dir, const int N);
void bitonicSort(int a[], int low, int n, int dir, const int N);
void bitonic_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
int partition(int *array, int low, int high, size_t size);
void quickSort(int *array, int low, int high, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
