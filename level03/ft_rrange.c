/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdio.h>

int		main(void)
{
	int start = -1;
	int end = 2;

	int *arr = ft_rrange(start, end);

	int i = 0;
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

int	*ft_rrange(int start, int end)
{
	int	i;
	int	j;
	int	n;
	int	*tab;

	n = 1 + abs(end - start);
	tab = malloc(sizeof(int) * n);
	if (start > end)
		j = 1;
	else
		j = -1;
	i = 0;
	while (i < n)
	{
		tab[i] = end;
		end += j;
		i++;
	}
	return (tab);
}