#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text to file
 * @filename: ptr to file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, m, len = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	m = write(fd, text_content, len);

	if (fd == -1 || m == -1)
		return (-1);

	close(fd);
	return (1);
}
