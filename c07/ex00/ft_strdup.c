#include <stdlib.h>

int		get_legth(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *temp;
	int index;

	if (*src)
		return (0);
	index = 0;
	temp = (char *)malloc(get_legth(src) * sizeof(char) + 1);
	while (src[index])
	{
		temp[index] = src[index];
		index++;
	}
	temp[index] = '\0';
	return (temp);
	
}

#include <stdio.h>

int 	main(void)
{
	char c[] = "abcde";
	ft_strdup(c);
	printf("%s", c);
}
