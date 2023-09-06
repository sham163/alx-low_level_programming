#include "main.h"
#include <stdlib.h>

/**
 * Description: alloc_grid - a function that returns
 * a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **sham, s, t;


	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	sham = malloc(sizeof(*sham) * height);

	if (sham == NULL)
	{
		return (NULL);
	}
	else
	{
		for (s = 0; s < height; s++)
		{
			sham[s] = malloc(sizeof(**sham) * width);

			if (sham[s] == NULL)
			{
				while (s--)
				{
					free(sham[s]);
				}
				free(sham);
				return (NULL);
			}

			for (t = 0; t < width; t++)
			{
				sham[s][t] = 0;
			}
		}
	}
	return (sham);
}


