#include "main.h"

/**
 * create_file -creates an array of chars, and initializes
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 *
 * @filename: is the name of the file to create
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
