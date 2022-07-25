#include "main.h"
#include <stdio.h>
/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: content to be added
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count, i;

	char *buf;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR, 600);
	if (fd == -1)
	{
		return (-1);
	}
	count = 0;
	for (i = 0; text_content[i] != '\0'; i++)
	{
		count++;
	}
	write(fd, text_content, count);
	close(fd);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
	buf = malloc(sizeof(char) * count);
	if (buf == NULL)
	{
		return (-1);
	}
	read(fd, buf, count);
	buf[count] = '\0';
	close(fd);
	return (1);
}
