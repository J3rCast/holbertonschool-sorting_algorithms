#include "sort.h"
/**
 * partition - partition the array
 *
 * @array: array to sort
 * @low: lowest index 
 * @high: higher index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i = low - 1, j = low;
	int temp = 0;
	int boolean = 0;

	for (j = low; j < high; j++)
	{
		size = size;
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			boolean = boolean;
			if (i != j)
				print_array(array, size);
		}
	}
	i++;
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;
	if (i != j)
		print_array(array, size);
	return (i);
}
/**
 * qs - sort an array using quick sort
 * 
 * @array: array to sort
 * @low: lowest index 
 * @high: higher index
 */
void qs(int *array, int low, int high, size_t size)
{
	int pivot = 0;

	if (low >= high || low < 0)
		return;

	pivot = partition(array, low, high, size);
	qs(array, low, pivot -1, size);
	qs(array, pivot + 1, high, size);
}
/**
 * quick_sort - Sort an array using the quick
 * sort sorting algorithm
 *
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}
