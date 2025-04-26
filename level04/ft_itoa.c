/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);

--------------------------------------------------------------------------------

#include <stdio.h>
#include <limits.h>

int		main(void)
{
	int d = INT_MIN;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = -13;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 0;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 5;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = INT_MAX;
	printf("%d =? %s\n", d, ft_itoa(d));
}
*/

#include <stdlib.h>

size_t	ft_abs(int n)//ignoring -
{
	if (n < 0)
		return (-n);
	return (n);
}

size_t	ft_count(int n)
{
	size_t	c = 0;

	if (n <= 0)
		c++;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = ft_count(n);//geting string size for malloc
	str = malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	str[size] = '\0';//put the end to the last index
	if (n == 0)//check 0
		str[0] = '0';
	else if (n < 0)//check minus
		str[0] = '-';
	while (n != 0)
	{
		str[--size] = ft_abs(n % 10) + '0';//int to char
		n /= 10;
	}
	return (str);
}