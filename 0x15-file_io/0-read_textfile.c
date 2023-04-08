#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - This is a function that reads a text fie and prints
 * @filename: This is the file name to be opened
 * @letters: This is the number of letters to read and prints
 * Return: 0 if its fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fgood, fbetter, fbest;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	fgood = open(filename, O_RDONLY);
	if (fgood < 0)
	{
		free(temp);
		return (0);
	}

	fbetter = read(fgood, temp, letters);
	if (fbetter < 0)
	{
		free(temp);
		return (0);
	}

	fbest = write(STDOUT_FILENO, temp, fbetter);
	free(temp);
	close(fgood);

	if (fbest < 0)
		return (0);
	return ((ssize_t)fbest);
}
