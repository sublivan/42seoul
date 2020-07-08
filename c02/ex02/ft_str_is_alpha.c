
int		ft_str_is_alpha(char *str)
{
	if ( *str == '\0')
		return 1;
	while (*str != '\0')
	{
		char cp;

		cp = *(str++);
		if ((cp >= 'a' && cp <= 'z') || (cp >= 'A' && cp <= 'Z') )
		{
			return (1);
		}
	}
	return (0);
}
