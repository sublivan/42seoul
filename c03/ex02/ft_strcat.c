char	*ft_strcat(char *dest, char *src)
{

	//char *temp;

	//temp = dest;
	while(*dest)
		++dest;
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = 0;
	return (dest);
}

#include <stdio.h>

int		main(void)
{
	char s1[] = "world";
	char s2[] = "hello";
	
	ft_strcat(s1, s2);

	printf("%s", s1);
	return 0;
}
