#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename : file to append text to
 * @text_content : text to be appended
 * Return: 1 0r -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, writing, length = 0;
	


	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
		{
			/* empty body */
		}

	}

	file = open(filename, O_WRONLY | O_APPEND);
	writing = write(file, text_content, length);

	if (file == -1 || writing == -1)
		return (-1);

	close(file);

	return (1);
}
