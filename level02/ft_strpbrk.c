/*

Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);

*/
int find_char(const char *s, const char *str)
{
	int i = 0;
	while (s[i])
	{
		if (str[0] == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		if (find_char(s2, s1))
			return ((char *)s1);
		s1++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
	printf("og: %s\nmy: %s\n", strpbrk("hello", "l"), ft_strpbrk("hello", "l"));
	return 0;
}