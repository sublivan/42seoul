#include <stdio.h>

int 	ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char src1[] = {"1234"};
	char src2[] = {"1234"};
	char src3[] = {"abcdef"};
	char src4[] = {"abcd"};

	printf("%d", ft_strcmp(src1, src2));
	printf("%d", ft_strcmp(src3, src4));

}
