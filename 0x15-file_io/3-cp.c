#include "main.h"

char *create_buff(char *fl);
void close_file(int u);

/**
* create_buffer - 1024 bytes are allocated for buffer.
* @fl: The pointer file buffer is stores chars
* buff - buffer pointer
* Return: pointer to the new buffer.
*/

char *create_buff(char *fl)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl);
		exit(99);
	}
	return (buff);
}

/**
* close_file - Closed file descriptors funct
* @u: to be closed file descriptor
* cls - int ver
*/

void close_file(int u)
{
	int cls;

	cls = close(u);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", u);
		exit(100);
	}
}
/**
* main - A funct that Copies the contents of a file into another file
* @argc: numb of args given to the prog
* @argv: array of pointers which points to the args
* u - read file
* v - write file
* bw - from & fw - to
* return: successful
* Description:
* Exit code 97 - If the arg count incorrect
* Exit code 98 - If file_from doesn't exist/cannot be read
* Exit code 99 - If file_to can't be created/written to
* Exit code 100 - If file_to/file_from can't be closed
*/

int main(int argc, char *argv[])
{
	int bw, fw, x, v;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	bw = open(argv[1], O_RDONLY);
	x = read(bw, buff, 1024);
	v = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (bw == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		v = write(fw, buff, x);

		if (fw == -1 || v == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		x = read(bw, buff, 1024);
		fw = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);

	free(buff);
	close_file(bw);
	close_file(fw);

	return (0);
}
