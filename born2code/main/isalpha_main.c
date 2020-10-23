#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha(32));
}
