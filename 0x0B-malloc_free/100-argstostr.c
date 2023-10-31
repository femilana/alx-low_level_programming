#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: str
 */

char *argstostr(int ac, char **av)
{
	int i, num, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (num = 0; av[i][num]; num++)
			l++;
	}

	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (num = 0; av[i][num]; num++)
	{
		str[r] = av[i][num];
		r++
	}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}

	return (str);

}
