/*

Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

*/
#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

void ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = ft_atoi(argv[1]);
        if (n <= 0)
        {
            write(1, "0\n", 2);
            return (0);
        }
        int sum = 0;
        int i = 2;
        while (i <= n)
        {
            int j = 2;
            int is_prime = 1;
            while (j * j <= i)
            {
                if (i % j == 0)
                {
                    is_prime = 0;
                    break;
                }
                j++;
            }
            if (is_prime)
                sum += i;
            i++;
        }
        ft_putnbr(sum);
        write(1, "\n", 1);
        return (0);
    }
    write(1, "0\n", 2);
    return (0);
}