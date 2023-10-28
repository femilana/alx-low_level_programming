#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if the string there are digit
 * @str: array str
 * Return: Always 0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*counts the  string*/

	{
		if (!isdigit(str[count])) /*checks if the str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - a function that Prints the name of the program
 * @argc: Count arguments
 * @argv: array Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*loop Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> converts the string to an int*/
			sum += str_to_int;
		}

/*Condition to check if one of the number*/
/*contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
