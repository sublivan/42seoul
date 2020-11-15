#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isascii(128));
	printf("%d\n", isascii(50));
	printf("%d\n", isascii(57));
	printf("%d\n", isascii('a'));
	printf("%d\n", isascii('F'));
	printf("%d\n", isascii('A'));
	printf("-----\n");
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(50));
	printf("%d\n", ft_isascii(57));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('F'));
	printf("%d\n", ft_isascii('A'));
}
