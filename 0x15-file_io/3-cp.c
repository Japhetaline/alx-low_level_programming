#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int safe_close(int);
/**
 * main - this is a main function that copy files
 * @argc: number of passed arguments
 * @argv: pointers to array arguments
 * Return: 1 if success, exits if fails
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, _EOF = 1, from_japhet = -1, to_japhet = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_japhet = open(argv[1], O_RDONLY);
	if (from_japhet < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_japhet = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_japhet < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(from_japhet);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from_japhet, buffer, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safe_close(from_japhet);
			safe_close(to_japhet);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		bytes_read += _EOF;
		error = write(to_japhet, buffer, _EOF);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			safe_close(from_japhet);
			safe_close(to_japhet);
			exit(99);
		}
	}
	error = safe_close(to_japhet);
	if (error < 0)
	{
		safe_close(from_japhet);
		exit(100);
	}
	error = safe_close(from_japhet);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * safe_close - function that closes a file and print error when file closed
 * @narration: Descriptive error for closed file
 * Return: 1 on success, -1 if fails
 */

int safe_close(int narration)
{
	int error;

	error = close(narration);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", narration);
	return (error);
}
