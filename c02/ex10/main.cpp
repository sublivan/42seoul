#include <stdio.h>

int	main(void)
{
	char str[] = "123";
	char src[] = "456789";
	
	unsigned int result = ft_strlcpy(str, src, 5);
	printf("%d \n", result);
	printf("%s \n", str);
	
}
