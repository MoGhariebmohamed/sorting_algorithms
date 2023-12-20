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
 *bubble_sort - sorts an array of integers in ascending order
 *
 *@array: the array to be bubble sorted
 *@size: the size of the array
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t y, i;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (y = 1; y <= size; y++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swaap(&array[i], &array[i + 1]);
				print_array(array, size);
			}
		}
	}
}
