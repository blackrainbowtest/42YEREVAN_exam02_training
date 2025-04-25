/*

Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);

*/
#include <unistd.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j = 0;
    while (s[i])
    {
        j = 0;

        while (accept[j])
        {
            if (s[i] == accept[j])
                break;
            j++;
        }
        if (!accept[j])
                return (i);
        i++;
    }
    return (i);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("og: %zu\nmy: %zu\n", strspn("hello", "hel"), ft_strspn("hello", "hel"));
    printf("og: %zu\nmy: %zu\n", strspn("hello", "hello1"), ft_strspn("hello", "hello1"));
    printf("og: %zu\nmy: %zu\n", strspn("", ""), ft_strspn("", ""));
    return 0;
}