#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("%c\n", tolower('A'));
	printf("%c\n", tolower('G'));
	printf("%c\n", tolower('Z'));
	printf("----\n");
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('G'));
	printf("%c\n", ft_tolower('Z'));
}
