#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('g'));
	printf("%c\n", toupper('z'));
	printf("----\n");
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('g'));
	printf("%c\n", ft_toupper('z'));
}
