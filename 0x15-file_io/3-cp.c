#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcnt1.h>
#include <unistd.h>

void check_10_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_s_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%S", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1]' 0_RDONLY);
	check_IO_stat(src, -1, argv[1],'0');
	dest = open(argv[2], 0_WRONLY | 0_CREAT | 0_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W'
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[2], 'w');
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * check_IO_stat - checks if a file can be opended or closed
 * @stat: file descriptor of the file to be opened or closed
 * @filename: name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == '0' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
}



















































