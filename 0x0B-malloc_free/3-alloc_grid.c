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
	
	int i, j, k;

	s = malloc((width * height) * sizeof(int));
	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (width * height); i++)
	{
		s[i] = 0;
	}
	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
		{
			*s[i] = j * height + k;
		}
	}
	return (s);
}
