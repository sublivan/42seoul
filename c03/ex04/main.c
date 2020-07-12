 
#include <stdio.h>

int     main(void)
{
    char s1[] = {"heworlloworld"};
    char s2[] = {"world"};

	char *ptr = ft_strstr(s1, s2);
    printf("%s", ptr);
    
} 
