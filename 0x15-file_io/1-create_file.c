#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with a specific text content.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int i, wcount = 0;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[wcount])
			wcount++;

		if (write(i, text_content, wcount) == -1)
		{
			close(i);
			return (-1);
		}
	}

	close(i);
	return (1);
}
