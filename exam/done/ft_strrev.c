
char	*ft_strrev(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	int size = i;
	int last = size -1;
	char temp;
	i =0;
	while(i < size/2)
	{
		temp = str[i];
		str[i] = str[last];
		str[last] = temp;
		i++;
		last--;
	}
	return (str);
}

#include <stdio.h>
int		main(void)
{
	char src[] = "abcdedf";

	printf("%s", ft_strrev(src));
	
}

/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/