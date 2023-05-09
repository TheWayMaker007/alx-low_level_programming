#include "main.h"

/**
* read_textfile- funct that reads text file & prints to the POSIX STD output
* @filename: reads the text file
* buff - char pointer
* @letters: takes the numb of char to be read in the file
* Return: v(total numb of bytes read & prints 0 if  funct fails/file is NULL)
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t v, u, x;

	u = open(filename, O_RDONLY);
	if (u == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	x = read(u, buff, letters);
	v = write(STDOUT_FILENO, buff, x);

	free(buff);
	close(u);

	return (v);
}
