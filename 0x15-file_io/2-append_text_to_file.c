#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - This function appends text at the end of file
 * @filename: The filename to be open and append in
 * @text_content: NULL terminated string to add
 * Return: 1 on success, -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int japho, japhw, len = 0;

	if (filename == NULL)
		return (-1);

	japho = open(filename, O_RDWR | O_APPEND);
	if (japho < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(japho);
		return (1);
	}

	while (*(text_content + len))
		len++;

	japhw = write(japho, text_content, len);
	close(japho);
	if (japhw < 0)
		return (-1);

	return (1);
}
