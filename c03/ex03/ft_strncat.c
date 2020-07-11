
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    int index;

    index = 0;
    while (*dest)
    {
		++dest;
    }
    while (index <= nb)
    {
		*dest++ = *src++;
		index++;
    }

    *dest = '\0';
	return (dest);
}

#include <stdio.h>

int     main(void)
{
    char s1[] = {"hello"};
    char s2[] = {"world"};

    ft_strncat(s1, s2, 2);
	printf("%s", s1);    
}
