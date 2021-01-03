#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isprint(128));
	printf("%d\n", isprint(22));
	printf("%d\n", isprint(57));
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint('F'));
	printf("%d\n", isprint('A'));
	printf("-----\n");
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(22));
	printf("%d\n", ft_isprint(57));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('F'));
	printf("%d\n", ft_isprint('A'));
}
