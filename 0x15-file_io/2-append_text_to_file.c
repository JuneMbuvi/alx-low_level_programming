#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text to file
 * @filename: filename
 * @text_content: NULL terminated string to add to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
