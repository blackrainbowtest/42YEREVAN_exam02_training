/*

Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);

*/
#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = -1;
    int     j;
    while (s[++i]) {
		j = -1;
        while (reject[++j])
            if(s[i] == reject[j]) return i;
    }
    return i;
}

int main()
{
	printf("og: %zu\nmy: %zu\n", strcspn("hello", "l"), ft_strcspn("hello", "l"));
	printf("og: %zu\nmy: %zu\n", strcspn("hello", ""), ft_strcspn("hello", ""));
	printf("og: %zu\nmy: %zu\n", strcspn("", ""), ft_strcspn("", ""));
	return 0;
}