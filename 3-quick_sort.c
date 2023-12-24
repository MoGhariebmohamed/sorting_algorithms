#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
 * quick_sort - implementation of a variant of quicksort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size){
    size_t n = size-1;
    size_t j=0, c = -1;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (j = 0; j < size; j++) {
        if(array[n]<array[j]){
        }else{
            c++;
            if(j>c){
                swaap(&array[c],&array[j]);
            }else if(j==c){
            }
        }
    }

        quick_sort(array, c );
        quick_sort(&array[c + 1], size - c);
}
