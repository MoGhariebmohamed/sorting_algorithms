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
    size_t j, k = 0;
    bool done = false;

	if (array == NULL || size < 2)
	{
		return;
	}
	while(!done){
        if(j==n){
            done=true;
            quick_sort(array, n-1 );
            quick_sort(&array[n+1],size-n);
        }else if(j<n){
            if(array[j]<array[n]){
                j++;
            }else{
                swaap(&array[j],&array[n]);
                k=n;
                n=j;
                j=k;
            }
        }else{
            if(array[n]<array[j]){
                j--;
            }else{
                swaap(&array[j],&array[n]);
                k=n;
                n=j;
                j=k;
            }
        }
    }
}
