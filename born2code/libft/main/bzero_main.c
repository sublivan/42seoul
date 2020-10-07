#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "hello world";
	ft_bzero(str, 5);

	for(int i = 0 ; i < sizeof(str); i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}
