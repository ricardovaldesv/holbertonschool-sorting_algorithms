#include "sort.h"

/**
 *bubble_sort- Function that sorts an array of integers in ascending order
 *using the Bubble sort algorithm
 *@array: array to sort
 *@size: size of array
 *Return: no return
 */


void bubble_sort(int *array, size_t size)
{

	size_t i, j;
	int dato;

	if (array == NULL)
		return;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				dato = array[i];
				array[i] = array[i + 1];
				array[i + 1] = dato;
				print_array(array, size);
			}
		}
	}
}

