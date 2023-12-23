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
 *selection_sort - sorts an array of integers in ascending by insertion sort
 *
 *@array: the array to be bubble sorted
 *@size: the size of the array
 *Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, insert;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (x = 0; x < size - 1; x++)
	{
		insert = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[insert] > array[y])
			{
				insert = y;
			}
		}
			if (insert != x)
			{
				swaap(&array[insert], &array[x]);
				print_array(array, size);
			}
		}
	}
