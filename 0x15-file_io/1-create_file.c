#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function to create a file
 * @filename: file to be created
 * @text_content: content of the file
 * Return: 1 if successfull -1 if not
 */


int create_file(const char *filename, char *text_content)
{
	int p = 0;
	int d = 0;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (filename != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	d = write(p, text_content, i);

	if (p == -1 || d == -1)
		return (-1);

	close(p);
	return (1);
}
