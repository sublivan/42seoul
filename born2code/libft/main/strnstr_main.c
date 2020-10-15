
#include <string.h>
#include <stdio.h>

int main(void)
{
	char big[] = "hello world";
	char little[] = "wor";

	printf("%s", strnstr(big, little, 11));
}
