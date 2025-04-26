/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.

#include <stdio.h>

int		main(void)
{
	int start = 1;
	int end = 3;
	int i = 0;
	int *arr = ft_range(start, end);

	while (i < 1 + abs(end - start))
	{
		printf("%d, ", arr[i]);
		++i;
	}
	printf("\n");
}
*/

#include <stdlib.h>

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	size = end - start;
	int	*i;
	int	*j;

	size = abs(size);
	if (size)
	{
		j = (int *)malloc(sizeof(int) * size);
		if (j)
		{
			i = j;
			while (start > end)
			{
				*j = start;
				j++;
				start--;
			}
			while (start <= end)
			{
				*j = start;
				j++;
				start++;
			}
			return (i);
		}
	}
	else
	{
		j = malloc(sizeof(int) * 1);
		*j = 0;
	}
	return (j);
}