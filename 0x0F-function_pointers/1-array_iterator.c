#include "function_pointers.h"

/**
 * array_iterator - execute a function given as parameter
 * @array: parameter for array
 * @size: parameter for size of array
 * @action: parameter for pointer to function
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if  (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
