
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    int index;

    index = 0;
    while (*dest)
    {
		++dest;
    }
    while (index < nb)
    {
		*dest++ = *src++;
		index++;
    }

    *dest = '\0';
	return (dest);
}
