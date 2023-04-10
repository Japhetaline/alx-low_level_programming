#include <stdio.h>

/**
 * main - starting point for program to get header of ELF file
 * @argc: This is a number of arg
 * @argv: This is the pointer to array of arg
 * Return: 1 if success , error code if fails
 */

int main(int argc, char *argv[])
{
	printf("argv:%p, argc:%d\n", (void *)*argv, argc);
	return (1);
}
