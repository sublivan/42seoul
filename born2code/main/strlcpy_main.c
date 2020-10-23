#include <string.h>
#include <stdio.h>

int main(void)
{
	char dest[256];
	char szInput[256];
  	printf("Enter a sentence: ");
  	scanf("%s", szInput);
  	printf("%lu\n", ft_strlcpy(dest, szInput, 4));
  	return 0;
}
