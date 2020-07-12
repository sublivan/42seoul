char    *ft_strstr(char *str, char *to_find)
{
	char *a;
	char b;
	char *result;
	int i;
	
	i = 0;
	if (*to_find == 0)
		return (0);

	while(*str)
	{
		a = str;
	    while(to_find[i] && *a == to_find[i])
	    {
	        ++a;
			++i;
	    }
	    if(to_find[i] == '\0')
			return (to_find);
		else
			i = 0;
		++str;
	}

    return (0);
}

