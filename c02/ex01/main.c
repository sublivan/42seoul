#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[20];

	ft_strncpy(src, "i love you", 5);
	printf("%s", src);
}
