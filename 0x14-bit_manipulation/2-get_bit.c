#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index
 * @n: parameter
 * @index: index
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
