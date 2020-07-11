char    *ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	if(*to_find == 0)
		return (str);
    while(*str)
    {
		a = str;
		b = to_find;
        while(*b && *a == *b)
        {
            ++a;
			++b;
        }
        if(*b == '\0')
			return (str);
		++str;
    }
    return (0);
}

#include <stdio.h>

int     main(void)
{
    char s1[] = {"helloworld"};
    char s2[] = {"world"};

	char *ptr = ft_strstr(s1, s2);
    printf("%s", ptr);
    
}
