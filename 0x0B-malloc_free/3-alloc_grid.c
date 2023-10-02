#include "main.h"

/**
 * alloc_grid - a 2-d array of integers
 * @width: The width
 * @height: Height
 *
 * Return: array on success or NULL if failure.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		arr[n] = malloc(sizeof(int) * width);
		if (arr[n] == NULL)
		{
			for (; n >= 0; n--)
				free(arr[n]);
			free(arr);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			arr[n][m] = 0;
	}
	return (arr);
}
