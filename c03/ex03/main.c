#include <stdio.h>

int     main(void)
{
    char s1[] = {"hello"};
    char s2[] = {"world"};

    ft_strncat(s1, s2, 2);
	printf("%s", s1);    
}
