#include	<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnumber(int n)
{
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnumber(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

int main ()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
			ft_putnumber(i);
		i++;
	}
	return (0);
}