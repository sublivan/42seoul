
	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

int		get_length(char *str);
char	*ft_strdup(char *src);

int main()
{
		char* p = ft_strdup("Hello World!");
	printf("content: %s\n", p);
	printf("len: %lu\n", strlen(p));

	printf("content: %s\n", ft_strdup(""));
	printf("content: %s\n", ft_strdup(" "));
}
