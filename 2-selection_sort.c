#include "sort.h"
/**
 * selection_sort - Sort an array using selection
 * sorthing algorithm.
 *
 * @array: array to sort.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t idx = 0, idx2 = 1, tempIdx = 0;
	int temp = 0, boolean = 0;

	while (idx < size)
	{
		temp = array[idx];
		while (idx2 < size)
		{
			if (array[idx2] < temp)
			{
				temp = array[idx2];
				tempIdx = idx2;
				boolean = 1;
			}
			idx2++;
		}
		if (boolean == 1)
		{
			array[tempIdx] = array[idx];
			array[idx] = temp;
			print_array(array, size);
		}
		boolean = 0;
		idx2 = idx + 1;
		idx++;
	}
}
