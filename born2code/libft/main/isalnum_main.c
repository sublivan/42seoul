
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", isalnum(48));
	printf("%d\n", isalnum(50));
	printf("%d\n", isalnum(57));
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('Z'));
	printf("%d\n", isalnum(23));
	printf("%d\n", isalnum('^'));
	printf("------\n");
	printf("%d\n", ft_isalnum(48));
	printf("%d\n", ft_isalnum(50));
	printf("%d\n", ft_isalnum(57));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum(23));
	printf("%d\n", ft_isalnum('^'));
}
