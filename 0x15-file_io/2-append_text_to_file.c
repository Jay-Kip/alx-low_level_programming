#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function to append to a file
 * @filename: name of the file
 * @text_content: content in th file
 * Return: 1 on success or -1 on failiure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int k = 0;
	int j = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	k = open(filename, O_WRONLY | O_APPEND, 0600);
	j = write(k, text_content, i);

	if (k == -1 || j == -1)
		return (-1);

	close(k);

	return (1);
}
