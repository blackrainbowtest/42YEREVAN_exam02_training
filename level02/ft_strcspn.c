#include 

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;

	while (s1[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int main()
{
	return 0;
}