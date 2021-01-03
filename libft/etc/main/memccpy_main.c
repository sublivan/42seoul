#include <stdio.h>
#include <string.h>

int main(void)
{
	char ptr[] = "goodbye my world";
	char src[] = "hello my friends";

	// ft_memccpy(ptr, src, 'l',3);
	memccpy(ptr, src, 'l',3);
	printf("%s",ptr);

	return (0);
}
