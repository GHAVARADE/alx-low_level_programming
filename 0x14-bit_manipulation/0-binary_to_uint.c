#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number to an unsigen int
 * @b: a pointer to string
 * Return:  the converted number
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int con_num = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
	if (b[i] < '0' || b[i] > '1')
	return (0);
	con_num = 2 * con_num + (b[i] - '0');
}
return (con_num);
}
