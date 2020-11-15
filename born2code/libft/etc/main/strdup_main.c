#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "hello world";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}
