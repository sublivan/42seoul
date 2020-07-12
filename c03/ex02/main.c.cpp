#include <stdio.h>

int		main(void)
{
	char s1[] = "world";
	char s2[] = "hello";
	
	ft_strcat(s1, s2);

	printf("%s", s1);
	return 0;
}
