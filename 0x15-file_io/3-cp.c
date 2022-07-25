#include "main.h"
int main(int ac, char **av)
{
	char buf[1024];

	char buff[1024];

	int fd, fd2, count, j;

	j = 0;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	if (!av[1])
	{
		dprintf(2, "Error: Can't read from file %s\n", av[0]);
		exit(98);
	}
	fd = open(av[1], O_RDONLY, 664);
	if (fd == -1)
	{
		return (1);
	}
	close(fd);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		return (1);
	}
	read(fd, buf, 1023);
	fd2 = open(av[2], O_RDONLY | O_APPEND, 664);
	if (fd2 == -1)
	{
		return (-1);
	}
	for (count = 0; buf[count] != '\0'; count++)
	{
		j++;
	}
	read(fd2, buff, 1023);
	write(fd, buff, j);
	close(fd);
	close(fd2);
/*	for(count = 0; buf[count] != '\0'; count++)
	{
		buff[count] = buf[count];
	}
	read(fd2, buff, 1023);*/
	return (0);
}
