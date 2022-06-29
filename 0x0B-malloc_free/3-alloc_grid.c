#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates space to a grid
 * @width: grid width
 * @height: grid height
 *
 * Return: Returns pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **s;

	int i, j, k, y;

	s = malloc((width * height) * sizeof(int));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = (int **)malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{

		s[i] = (int *)malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			free(s);
			for (y = 0; y <= i; y++)
			{
				free(s[y]);
			}
		return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			s[j][k] = 0;
		}
	}
	return (s);
}
