#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isdigit(48));
	printf("%d\n", isdigit(50));
	printf("%d\n", isdigit(57));
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit('F'));
	printf("%d\n", isdigit('A'));
	printf("-----\n");
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isdigit(50));
	printf("%d\n", ft_isdigit(57));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('F'));
	printf("%d\n", ft_isdigit('A'));
}
