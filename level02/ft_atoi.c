int main(int argc, char **argv)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		if (argv[1][i] == '+' || argv[1][i] == '-')
		{
			sign = -1
			i++;
		}
		while(argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			res = res * 10 + (argv[1][i] - '0');
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}