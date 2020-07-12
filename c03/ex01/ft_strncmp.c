
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char c1;
	char c2;
	int index;

	index = 0;
	while (index <= n)
	{
		c1 = *s1++;
		c2 = *s2++;

		if(c1 != c2)
		{
			if(c1 > c2)
				return (1);
			else
				return (-1);
		}
		if(c1 == '\0' || c2 == '\0')
			break;
	}
	return 0;
}

