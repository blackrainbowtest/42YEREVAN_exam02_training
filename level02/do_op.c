#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int first = atoi(argv[1]);
		int second = atoi(argv[2]);
		char operator = argv[3][0];
		int result = 0;

		if (operator == '+')
			result = first + second;
		else if (operator == '-')
			result = first - second;
		else if (operator == '*')
			result = first * second;
		else if (operator == '/')
			result = first / second;
		else if (operator == '%')
				result = first % second;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}