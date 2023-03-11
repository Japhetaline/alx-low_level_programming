#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments it recieves
 * @argc: number of arguments
 * @argv: array of an arguments
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
