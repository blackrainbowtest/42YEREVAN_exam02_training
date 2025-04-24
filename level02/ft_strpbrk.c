int find_char(char *s, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		if (find_char(s2, *s1))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

int main()
{

	return 0;
}