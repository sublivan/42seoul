
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int i;

	i=0;
	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return dest;
}

