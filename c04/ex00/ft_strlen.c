
int		ft_strlen(char *str)
{
	int index;
	
	index = 0;
	while(*str)
	{
		index++;
		++str;
	}
	return index;
}

#include <stdio.h>

int		main(void)
{
	
	char str[] = {"0123456"};
	printf("%d", ft_strlen(str));
}
