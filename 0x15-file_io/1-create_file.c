#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - This is a function that create a file
 * @filename: This is the filename to create
 * @text_content: This is a NULL terminated string
 * Return: 1 on success, -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int japho, japhw, len = 0;

	if (filename == NULL)
		return (-1);

	japho = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (japho < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	japhw = write(japho, text_content, len);
	close(japho);
	if (japhw < 0)
		return (-1);
	return (1);
}
