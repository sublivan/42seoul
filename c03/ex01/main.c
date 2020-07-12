
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = {"123456"};
	char s2[] = {"123456"};
	char s3[] = {"65432123"};
	char s4[] = {"65431223"};
	
	printf("%d \n", ft_strncmp(s1, s2, 4));
	printf("%d \n", ft_strncmp(s3, s4, 5));
}
