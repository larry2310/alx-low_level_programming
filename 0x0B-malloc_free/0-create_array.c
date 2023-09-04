#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || a == 0)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		a[i] = c;
	return (a);
}
