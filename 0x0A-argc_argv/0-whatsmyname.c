#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: number of the arguments
 * @argv: array of the arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])

{

	printf("%s\n", *argv);

	return (0);

}
