
#include <stdio.h>

int 	ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char src1[] = {"1234"};
	char src2[] = {"1234"};
	char src3[] = {"abcd"};
	char src4[] = {"abcde"};
	char src5[] = {"abcdef"};
	char src6[] = {"abcde"};

	printf("%d \n", ft_strcmp(src1, src2));
	printf("%d \n", ft_strcmp(src3, src4));
	printf("%d \n", ft_strcmp(src5, src6));
}
