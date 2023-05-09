#include "main.h"

/**
* create_file - funct that creates a file
* @filename: pointer pointing the name of file to be created
* dis - length of the char file
* @text_content: pointer pointing the string to write the file
* Return: 1 if it success. -1 if it fails
*/

int create_file(const char *filename, char *text_content)
{
	int u, v, dis = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (dis = 0; text_content[dis];)
			dis++;
	}
	u = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	v = write(u, text_content, dis);

	if (u == -1 || v == -1)
		return (-1);
	close(u);

	return (1);
}
