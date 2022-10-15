#ifndef _SORT_H_
#define _SORT_H_

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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void partition_caller(int *array, int left, int right, size_t size);
int partition(int *array, int left, int right, size_t size);
void counting_sort(int *array, size_t size);
void swap(listint_t **list, listint_t **node);
void cocktail_sort_list(listint_t **list);
void quick_sort_hoare(int *array, size_t size);
int partition_hoare(int *array, int left, int right, size_t size);
void partition_caller_h(int *array, int left, int right, size_t size, int tmp);
void radix_sort(int *array, size_t size);
void radix_count(int *array, int size, int j);
void merge_sort(int *array, size_t size);
void merge_caller(int *sub_array, int *array, int left, int right);
void merge(int *sub_array, int *array, int left, int mid, int right);
#endif
