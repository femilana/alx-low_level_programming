#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a functon to concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory space
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int ls1, ls2, lsout, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	ptr = malloc(lsout + 1);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < lsout; a++)
		if (a < ls1)
			ptr[a] = s1[a];
		else
			ptr[a] = s2[a - ls1];

	sout[a] = '\0';

	return (ptr);
}
