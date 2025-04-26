/*

Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);

*/

#include <unistd.h>
#define BASE "0123456789abcdef"

int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    int i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        int value;
        if (str[i] >= '0' && str[i] <= '9')
            value = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            value = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            value = str[i] - 'A' + 10;
        else
            break;
        if (value >= str_base)
            break;
        result = result * str_base + value;
    }
    return (result * sign);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    
    if (argc == 3)
    {
        int res = ft_atoi_base(argv[1], argv[2]);
        printf("og: %d\nmy: %d\n", atoi(argv[1]), res);
    }
    else
    {
        // default 15 10
        int res = ft_atoi_base("15", 10);
        printf("og: %d\nmy: %d\n", atoi("15"), res);
    }
    return (0);
}
