char	*ft_strcpy(char *src, char *dest)
{
	int	i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}