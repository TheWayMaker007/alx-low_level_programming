#include "main.h"

/**
* append_text_to_file - A funct that appends text at the end of a file
* @filename: A pointer pointing to the name of the file created
* dis - length of the file
* @text_content: str to add to the end of the file.
* Return: 1 if file exists & -1 if the fails doesn't exist/if it fails
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int u, v, dis = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (dis = 0; text_content[dis];)
			dis++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	v = write(u, text_content, dis);

	if (u == -1 || v == -1)
		return (-1);
	close(u);

	return (1);
}
