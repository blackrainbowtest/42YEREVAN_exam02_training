/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);

--------------------------------------------------------------------------------

#include <stdio.h>

int		main(void)
{
	// char test[] = "\njrS58VHQ	\n   	p70fL		Kx2sRP0So3E4rC9  \n nebpv3J5ousO84Pa1HjUQOImUhjwZpGn	\n \n	X28iT7Ap9 	DIYAF9ZSpKcs0Rcv\n uzO\n		\nZ7zjEeonALOKQF5xq	\n   \nQxp0b1ufFKGJ	\n2n8R9zUvZEtOwmqf\n	";
	char test[] = "DIYAF9ZSpKcs0Rcv \n uzO\n		\nZ7zjEeonALOKQF5xq	\n   \nQxp0b1ufFKGJ	\n2n8R9zUvZEtOwmqf\n	";

	char **arr = ft_split(test);

	int i = 0;
	while (arr[i] != 0)
	{
		printf("[%s]\n", arr[i]);
		++i;
	}
}
*/

#include <libc.h>

char	**ft_split(char *str)
{
	char **tab;
	int i = 0;
	int j;

	tab = (char **)malloc(sizeof(char *) * 1000);//1000 is random size
	if (!tab)
		return (NULL);
	while (*str)
	{
		tab[i] = malloc(1000);//1000 is random size
		while (*str && (*str == ' ' || *str == '\t'))
			str++;
		j = 0;
		while (*str && (*str != ' ' || *str != '\t'))
			tab[i][j++] = *str++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}