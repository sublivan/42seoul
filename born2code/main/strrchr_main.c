#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* ft_strrchr(char* str, int character);

int	main(void)
{
	char str[] = "hello world";
	char *result;

	result = ft_strrchr(str, 'o');
	printf("%s", result);

}
