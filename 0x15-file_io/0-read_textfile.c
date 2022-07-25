#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads and writes a file
 * @filename: file to be created
 * @letters: number of letters to be printed
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buf;

	ssize_t count, i;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_CREAT | O_RDONLY, 666);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	count = read(fd, buf, letters);
	close(fd);
	if (count == -1)
	{
		free(buf);
		return (0);
	}
	i = write(STDOUT_FILENO, buf, count);
	free(buf);
	if (i != count)
	{
		return (0);
	}
	return (i);
}
