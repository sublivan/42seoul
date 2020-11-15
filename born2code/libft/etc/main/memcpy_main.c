#include <stdio.h>
int main(void)
{
	char ptr[] = "goodbye my world";
	char src[] = "hello my friends";

	memcpy(ptr, src, 3);

	printf("%s",ptr);

	return (0);
}
