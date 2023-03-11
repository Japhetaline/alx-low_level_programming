#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: Count arguments
 * @argv: array of an arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
