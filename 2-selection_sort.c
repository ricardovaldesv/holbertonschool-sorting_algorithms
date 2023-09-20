#include "sort.h"
/**
  *selection_sort - function that sorts an array of integers in
  *ascending order
  *@array: array to sort
  *@size: size of array
  *Return: void
  */

void selection_sort(int *array, size_t size)
{
	unsigned int least_index, i = 0, j = 1;
	int least, aux;

	for (; i < size - 1; i++, j = i + 1)
	{
		least = array[i];
		for (; j < size; j++)
		{
			if (least > array[j])
			{
				least_index = j;
				least = array[j];
			}
		}
		if (i != (unsigned int)least_index)
		{
			aux = array[i];
			array[i] = least;
			array[least_index] = aux;
			print_array(array, size);
		}
	}
}
