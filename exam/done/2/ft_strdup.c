
char		*ft_strdup(char *src)
{
	char *result;
	int len = 0;
	while(src[len])
	{
		len++;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if(result == 0)
		return (0);
	result[len] = '\0';
	while (len >= 0)
	{
		result[len] = src[len];
		len--;
	}
	return (result);
}


/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);

#include <string.h>

*/