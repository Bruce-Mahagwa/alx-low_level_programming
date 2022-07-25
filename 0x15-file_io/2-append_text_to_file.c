#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: pointer to file
 * @text_content: texts
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count, i, fd;

	char *buf;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND, 644);
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
		free(buf);
		return (-1);
	}
	read(fd, buf, count);
	buf[count] = '\0';
	close(fd);
	free(buf);
	return (1);
}
