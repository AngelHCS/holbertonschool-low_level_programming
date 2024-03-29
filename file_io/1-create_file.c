#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: pointer of desired filename
 * @text_content: string of text to put in file.
 * Return: spit out the file with content, otherwise -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/** O_TRUNC empties file contents THEN starts writing*/
	/**alternatively i could use O_APPEND but it adds, does not overwrite*/
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
