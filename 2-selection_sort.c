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
	unsigned int i = 0, j;
	int least, aux, least_index;

	if (array == NULL)
		return;

	while (i < size - 1)
	{
		least = array[i];
		least_index = i;
		j = i + 1;
		while (j < size)
		{
			if (least > array[j])
			{
				least_index = j;
				least = array[j];
			}
			j++;
		}
		if (i != (unsigned int)least_index)
		{
			aux = array[i];
			array[i] = least;
			array[least_index] = aux;
			print_array(array, size);
		}
		i++;
	}
}
