#include <stdio.h>
#include <string.h>

void *ft_memset(void *ptr, int value, size_t num);

int main(void)
{
	// char str[] = "hello word";
	// memset(str, '-', sizeof(str));
	// printf("%s", str);
	// printf("\n");

	char str2[] = "hello word";
	ft_memset(str2, '+', 3);
	printf("%s", str2);

	return 0;
}

