#include <stdio.h>
#include <string.h>

int main(void)
{

	char str2[] = "hello word";
	ft_memset(str2, '+', 3);
	printf("%s", str2);

	return 0;
}
