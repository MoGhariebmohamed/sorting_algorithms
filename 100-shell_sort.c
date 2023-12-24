#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *swaap - to swap 2 elements
 *
 *@a: the array element
 *@b: the array element
 * Return: non
 */
void swaap(int *a, int *b)
{
	int repl;

	repl = *a;
	*a = *b;
	*b = repl;
}
/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swaap(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
