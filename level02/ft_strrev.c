/*

Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

*/

#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    char tmp;
    int i = 0;
    int j = ft_strlen(str) - 1;

    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}

int main(void)
{
    char str[] = "hello";
    printf("og: %s\nmy: %s\n", str, ft_strrev(str));
    return (0);
}
