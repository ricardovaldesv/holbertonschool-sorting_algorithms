#include "sort.h"

/**
 *add- Function that adds the top two elements of the stack.
 *@stack: stack struct
 *@line_number: line_number
 *Return: no return
 */


void bubble_sort(int *array, size_t size)
{

	size_t i, j;
	int dato;
	
	for (j = 0; j < size- 1; j++)
	{
		for(i = 0; i < size -j - 1; i++)
		{
			if (array[i] > array[i+1])
			{
				dato = array[i];
				array[i] = array[i+1];
				array[i+1] = dato;
				print_array(array, size);
			}
		}
	}
}

